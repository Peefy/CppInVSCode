
**Windows Features**

* **桌面窗口**

1. GetDesktopWindow：获取桌面窗口句柄
2. SystemParameter(wAction=SPI_SETDESKWALLPAPER)：设置桌面壁纸

* **窗体结构**

* **客户区和非客户区**

1. 客户区：应用程序中可以直接输出的区域
2. 非客户区：应用程序中的特殊区域(保护标题栏，菜单栏，系统按钮等)

* **窗口创建消息**

1. WM_NCCREATE:创建非客户区消息
2. WM_CREATE:创建客户区消息
3. WM_PARENTNOTIFY:创建子窗口后系统发送给父窗口

* **窗口类型**

1. OverlappedWindows:是一种顶层窗口;有标题栏、边框、客户区(WS_OVERLAPPED)，可选：窗口菜单、最小化和最大化按钮、滚动条(WS_OVERLAPPEDWINDOW);通常作为程序的主窗口

2. Pop-UpWindows弹出窗口:是一种特殊的Overlapped窗口;经常用来弹出对话框、消息窗口和临时窗口;使用WS_POPUP样式创建窗口;

3. Child Windows子窗口:WS_CHILD样式;局限于父窗口的显示区，必须为其指定一个父窗口;
通常用来切分父窗口;子窗口显示默认是在父窗口的左上角，如果比父窗口大，则进行裁剪;父窗口的消息影响其子窗口: Destroyed:子窗口先销毁 ;Hidden:子窗口先隐藏;Moved:随着父窗口移动，移动后得自绘;Show:父窗口先显示; 裁剪：WS_CLIPCHILDREN样式使父窗口不能在子窗口之上绘制;和父窗口关系：SetParent：指定一个父窗口，参数为NULL时，显示在桌面上，可以自由拖动;GetParent：获得父窗口的句柄;IsChild：判断一个窗口是不是另一个窗口的子窗口;EnumChildWindow：枚举子窗口;子窗口和父窗口的类型可以不一样;消息：子窗口的消息直接发送给子窗口，如被禁止，则发送到父窗口；EnableWindow：禁止或启用一个子窗口；
层叠窗口：WS_EX_LAYERED;消息窗口：不可见、没有z自序，不能被枚举，不能收到广播消息;使用HWND_MESSAGE句柄;使用FindWindowEx并传入HWND_MEAAGE查找窗口

* **窗口关系**

1. 前台窗口与后台窗口

2. Owned窗口

3. Z-Order

* **窗口状态**

1. Aactive Windows:当前用户正在使用的窗口

2. Disable Windows：

3. 可见性

4. CloseWindow:最小化窗口

* **Windows大小和位置**

1. WM_GETMINMAXINFO:获取窗口大小拖动时最大尺寸和最小尺寸;WS_THICKFREAME：容许一个窗口大小被拖动

2. WM_SYSCOMMAND:用户点击窗口菜单时由系统发送

3. 改变大小或位置：

4. AnimateWindow：特殊显示或隐藏窗口

* **窗口销毁**

1. DestroyWindow：销毁窗口

2. WM_CLOSE:在销毁窗口前，提供给用户一个确认的机会

3. WM_DESTROY:给应用程序一次清理资源的机会

4. PostQuitMessage:应用程序清理完资源时调用，退出主消息循环

5. UpdateWindow：发送WM_PAINT消息
