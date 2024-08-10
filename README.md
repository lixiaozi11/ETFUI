# ETFUI
基于ET6.0的简单拓展

# 参考
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

# Luban
1.  将ET自带的配置工具修改为Luban，相关修改请查看\Unity\Codes\Model\Module\Config、\Unity\Codes\ModelView\Demo\Config、
\Unity\Codes\Hotfix\Module\Config、Unity\Codes\HotfixView\Demo\Config，以及对应的服务端目录下\Server\Model\Config......
2.  使用\Excel 文件夹下的gen.bat来生成Luban相关文件，.conf文件用来分别收集客户端、服务端配表。
3.  \Excel\CustomTemplate\cs-bin下定义了生成代码模板。

# YooAsset 2.2
1.  在\Unity\Assets\Mono\YooAsset\下的YooAssetResComponent中对YooAsset进行初始化操作。在YooAssetHelper中用 ETTask 对 YooAsset 的异步操作做了扩展。
2.  在\Unity\Codes\HotfixView\Module\YooAsset 中使用YooAsset的资源更新，加载，卸载相关接口。
# HybridCLR
1.  UIPropTips系统
2.  切换控制器系统


