# U-Device-ICO
## 40行左右C代码，编译生成 exe 运行，即可更改U盘图标。
核心原理是在U盘根目录下创建一个 autorun.inf 文件。
它的内容是：
[Autorun]
icon=1.ico
