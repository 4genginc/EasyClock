# clock

```
下载：
git clone https://github.com/4genginc/clock.git

测试github是否联通：
ssh -T git@github.com

上传：
将自己的修改push到github上：
git add .
git commit -m "first commit"
git push -u origin master
or
git add --all
git commit -m "first commit"
git push -u origin master

更新：
git pull: 更新当前分支(将本地的文件更新到最新)
git pull origin master: 更新 origin remote 的 master 分支
git fetch: 获取服务器端的改动，比如其他用户新建了一个分支并push到了服务器，运行这个命令之后会得到这个分支的信息

git撤销已经push到远端的commit：
git log -2
git reset --hard d3b87bab6d216299d7167f9e53ac1ed43c6a1xxx
git push origin master --force

```


Clock is a device manufactured by 4G ENG INC to provide a low-cost small-size configurable clock generator with GPS sync option. It was specifically designed to be used with USRP, but nothing prevents you from using it with other device of your choice given it has external clock input.

Clock is not only Open-Source Software project, but is also an Open-Source Hardware (OSHW) project. All schematics, bill of materials and components placement are provided.

This project holds all source code you may need to work with ClockTamer and various instructions on how to use and hack it.

ClockTamer may be used as a reference clock, e.g. for: 