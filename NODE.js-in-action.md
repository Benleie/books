## node basic
#### module
+ 如果模块返回的函数或变量不止一个，那它可以通过设定 exports 对象的属性来指明它们.
+ require属于同步操作.
+ 模块搜索规则：核心模块---当前目录的node_modules---所有父目录的node_modules---环境变量NODE_PATH
index.js或者package.json的main

#### 异步

+ 事件触发响应逻辑  回调和事件监听
+ 创建中间函数，减少回调嵌套；用return代替if/else
+ 继承Event.Emitter() emit on 反复调用