# U-Device-ICO
__40行左右C代码，编译生成 exe 运行，即可更改U盘图标__  
效果像这样:  

![](https://github.com/Oslomayor/USB-Device-ICO/blob/master/%E9%95%87%E9%95%BF%E7%9A%84U%E7%9B%98.PNG?raw=true)
## 原理
 核心原理是用C语言的文件操作，在U盘根目录下创建一个 **autorun.inf** 文件  
 **autorun.inf** 的内容是：  
> [Autorun]    
> icon=xxx.ico   
> xxx 为 ico 图片的文件名  
> 插入U盘, Windows 会自动运行 **autorun.inf**  
## 操作流程 
1.准备一张 ico 格式的图片，放在U盘根目录下  
2.将源代码编译后的 exe 程序放在U盘根目录下  
3.在U盘根目录中运行 exe 程序  
4.重新拔插U盘图标更改生效  
