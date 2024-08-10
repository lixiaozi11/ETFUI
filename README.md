# ETFUI
基于ET6.0的简单拓展

#### 参考
- [ET](https://github.com/egametang/ET)
- [ET-EUI](https://github.com/zzjfengqing/ET-EUI)
- [ET-YIUI](https://github.com/LiShengYang-yiyi/YIUI/tree/YIUI-ET7.2)
- [ETPro](https://github.com/526077247/ETPro)
- [X-ET7](https://github.com/IcePower/X-ET7)
- [DCET](https://github.com/DukeChiang/DCET)
- [HybridCLR](https://github.com/focus-creative-games/hybridclr)
- [YooAsset](https://github.com/tuyoogame/YooAsset)
- [Luban](https://github.com/focus-creative-games/luban)
- [FairyGUI](https://www.fairygui.com/)

#### Luban
1.  将ET自带的配置工具修改为Luban，相关修改请查看\Unity\Codes\Model\Module\Config、\Unity\Codes\ModelView\Demo\Config、
\Unity\Codes\Hotfix\Module\Config、Unity\Codes\HotfixView\Demo\Config，以及对应的服务端目录下\Server\Model\Config......
2.  使用\Excel 文件夹下的gen.bat来生成Luban相关文件，.conf文件用来分别收集客户端、服务端配表。
3.  \Excel\CustomTemplate\cs-bin下定义了生成代码模板。
#### YooAsset
-  拼好UI预设物，选择UI物体右键点击SpawnEUICode选项生成UI绑定代码  
-  无需挂任何脚本，无需拖拽任何组件，无需关心组件类型
-  直接开始编写UI业务逻辑，使用公共UI与Item扩展轻松下沉业务逻辑
-  提供统一的UI窗口显示，隐藏，完全关闭，预加载，卸载等接口
-  需要生成的UI窗口以Dlg开头，UI窗口放入Dlg目录
-  需要绑定的UI组件以E开头  
-  需要生成的公共UI以ES开头，公共UI放入Common目录
-  需要生成的循环列表项以Item_开头，滚动项放入Item目录
-  需要生成的空组件物体的引用以EG开头  
-  红点系统加入
#### HybridCLR
1.  UIPropTips系统
2.  切换控制器系统


