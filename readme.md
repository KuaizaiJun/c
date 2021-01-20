##日志
#2021 01 20

今天第一次使用VS Code运行C程序

第一次配置失败了

原因是没有安装gdb

>https://blog.csdn.net/qq_40871466/article/details/88079279

```bash
kzj@linux:~/Github/c$ apt-get install gdb
E: 无法打开锁文件 /var/lib/dpkg/lock-frontend - open (13: 权限不够)
E: 无法获取 dpkg 前端锁 (/var/lib/dpkg/lock-frontend)，请查看您是否正以 root 用户运行？
kzj@linux:~/Github/c$ sudo !!
sudo apt-get install gdb
请输入密码
[sudo] kzj 的密码：
验证成功
正在读取软件包列表... 完成
正在分析软件包的依赖关系树       
正在读取状态信息... 完成       
将会同时安装下列软件：
  libbabeltrace1 libc6-dbg libipt2
建议安装：
  gdb-doc gdbserver
下列【新】软件包将被安装：
  gdb libbabeltrace1 libc6-dbg libipt2
升级了 0 个软件包，新安装了 4 个软件包，要卸载 0 个软件包，有 1 个软件包未被升级。
需要下载 14.6 MB 的归档。
解压缩后会消耗 27.5 MB 的额外空间。
您希望继续执行吗？ [Y/n] y
获取:1 https://community-packages.deepin.com/deepin apricot/main amd64 libbabeltrace1 amd64 1.5.6-2+deb10u1 [172 kB]
获取:2 https://community-packages.deepin.com/deepin apricot/main amd64 libipt2 amd64 2.0-2 [41.7 kB]
获取:3 https://community-packages.deepin.com/deepin apricot/main amd64 gdb amd64 8.2.1-2+b1 [3,134 kB]
获取:4 https://community-packages.deepin.com/deepin apricot/main amd64 libc6-dbg amd64 2.28.8.1-1+dde [11.3 MB]
已下载 14.6 MB，耗时 7秒 (2,149 kB/s)                                                                                                                                                      
正在选中未选择的软件包 libbabeltrace1:amd64。
(正在读取数据库 ... 系统当前共安装有 211082 个文件和目录。)
准备解压 .../libbabeltrace1_1.5.6-2+deb10u1_amd64.deb  ...
正在解压 libbabeltrace1:amd64 (1.5.6-2+deb10u1) ...
正在选中未选择的软件包 libipt2。
准备解压 .../libipt2_2.0-2_amd64.deb  ...
正在解压 libipt2 (2.0-2) ...
正在选中未选择的软件包 gdb。
准备解压 .../gdb_8.2.1-2+b1_amd64.deb  ...
正在解压 gdb (8.2.1-2+b1) ...
正在选中未选择的软件包 libc6-dbg:amd64。
准备解压 .../libc6-dbg_2.28.8.1-1+dde_amd64.deb  ...
正在解压 libc6-dbg:amd64 (2.28.8.1-1+dde) ...
正在设置 libc6-dbg:amd64 (2.28.8.1-1+dde) ...
正在设置 libipt2 (2.0-2) ...
正在设置 libbabeltrace1:amd64 (1.5.6-2+deb10u1) ...
正在设置 gdb (8.2.1-2+b1) ...
正在处理用于 man-db (2.8.5-2) 的触发器 ...
正在处理用于 libc-bin (2.28.8.1-1+dde) 的触发器 ...
kzj@linux:~/Github/c$ whereis gdb
gdb: /usr/bin/gdb /etc/gdb /usr/include/gdb /usr/share/gdb
```

在运算符号两边添加空格

整数操作执行舍位 5 / 9 = 0