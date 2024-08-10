
namespace Luban
{
    public abstract class BeanBase
    {
        public abstract int GetTypeId();

        public virtual void AfterEndInit() { }
    }
}
