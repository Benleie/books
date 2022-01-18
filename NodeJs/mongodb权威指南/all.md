### fundamental

键 + 值 ———— 文档 ———— 集合 ———— 数据库 ———— mongodb实例

mongod运行数据库，mongo连接并操作数据库。

在Mongo中可以通过load函数，执行js.

主端口：27017  监听端口：28017 数据库的管理信息

show tables = show collections?

### CRUD
#### Insert Ducuments
在MongoDB中，你不需要创建集合。当你插入文档时,MongoDB会自动创建集合。

MongoDB CRUD Operations > Insert Documents > Insert Methods
		db.collection.insert()
		db.collection.insertOne()
		db.collection.insertMany()

#### Query Documents
 db.collection.find() 