## 程序结构

* 图
  in:分割后的数据
  out:图结构，图操作
* 用户界面
  in:
  out:输入流
* 功能层
  in:图对象
  out:拓扑链表装入文件并显示在用户界面

* 日志系统
* 异常处理

用户界面大致设计如图：





图的结构设计如下：







点：

存储结构：uid-info

对象结构：uid-info-ptr-ptr

​	增：输入uid与info，判断uid是否存在

​	删：删除点与对应的边信息

边：

存储结构：uid-uid

对象结构：uid-uid

​	增：选择点

​	删：删除边

图：

对象结构：node_vector,

​					map<uid-index>

​	点存在修改时会更新node_vector,map，边修改时不用更新两者
