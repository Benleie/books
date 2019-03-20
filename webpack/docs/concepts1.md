#### 基础
+ 依赖关系图  bundle

###### loader
+ loader可以处理非js的文件 将其转化为可处理的有效模块
+ test:识别文件; use:应用Loader

+ 插件处理各种任务
+ mode  启用相应模式下的 webpack 内置的优化


#### entry points
+ 分离应用程序(app)和第三方库(vendor) 入口,使用CommonsChunkPlugin从**应用程序bundle**中提取 vendor reference 到 **vendor bundle**

#### mode 设置即可启动内置插件
+ development   production

#### loader 
+ 除了在配置中，还有别的使用方式
+ 一组链式的 loader 将按照相反的顺序执行。

#### manifest
+ 即使表面上某些内容没有修改，计算出的哈希还是会改变。这是因为，runtime 和 manifest 的注入在每次构建都会发生变化。