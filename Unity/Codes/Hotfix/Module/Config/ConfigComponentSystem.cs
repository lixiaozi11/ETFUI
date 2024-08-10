using Luban;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace ET
{
	[ObjectSystem]
    public class ConfigAwakeSystem : AwakeSystem<ConfigComponent>
    {
        public override void Awake(ConfigComponent self)
        {
	        ConfigComponent.Instance = self;
        }
    }
    
    [ObjectSystem]
    public class ConfigDestroySystem : DestroySystem<ConfigComponent>
    {
	    public override void Destroy(ConfigComponent self)
	    {
		    ConfigComponent.Instance = null;
	    }
    }
    
    [FriendClass(typeof(ConfigComponent))]
    public static class ConfigComponentSystem
	{
		public static void LoadOneConfig(this ConfigComponent self, Type configType)
		{
            ByteBuf oneConfigBytes = self.ConfigLoader.GetOneConfigBytes(configType.FullName);

			object category = Activator.CreateInstance(configType, oneConfigBytes);

			self.AllConfig[configType] = category;
		}
		
		public static void Load(this ConfigComponent self)
		{
			self.AllConfig.Clear();
			List<Type> types = Game.EventSystem.GetTypes(typeof (ConfigAttribute));
			
			Dictionary<string, ByteBuf> configBytes = new Dictionary<string, ByteBuf>();
			self.ConfigLoader.GetAllConfigBytes(configBytes);

			foreach (Type type in types)
			{
				self.LoadOneInThread(type, configBytes);
			}
		}
		
		public static async ETTask LoadAsync(this ConfigComponent self)
		{
			self.AllConfig.Clear();
			List<Type> types = Game.EventSystem.GetTypes(typeof (ConfigAttribute));
			
			Dictionary<string, ByteBuf> configBytes = new Dictionary<string,ByteBuf>();
			self.ConfigLoader.GetAllConfigBytes(configBytes);

			using (ListComponent<Task> listTasks = ListComponent<Task>.Create())
			{
				foreach (Type type in types)
				{
					Task task = Task.Run(() => self.LoadOneInThread(type, configBytes));
					listTasks.Add(task);
				}

				await Task.WhenAll(listTasks.ToArray());
			}
		}
        //�ĳ�ʹ��buf�࣬����Ĳ��䡣�ڼ��ر������ĵط�ת����buf�࣬AllConfig�洢��object���Ͳ��øı�
        private static void LoadOneInThread(this ConfigComponent self, Type configType, Dictionary<string, ByteBuf> configBytes)
		{
            ByteBuf oneConfigBytes = configBytes[configType.Name];

			object category = Activator.CreateInstance(configType, oneConfigBytes);
           
            lock (self)
			{
				self.AllConfig[configType] = category;
			}
		}
	}
}