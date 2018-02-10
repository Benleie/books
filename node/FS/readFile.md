node:up and running
+ readFile() 不加参数，默认读取到<Buffer >，namely,返回的是原始的缓存二进制数据，这时需要调用buffer对象的toString方法，将其转为字符串。

```js
var md = fs.readFile('hh.md',function(error,data){
	if(error) throw err;
	console.log(data)
})
var filehandle = fs.readFile('data.txt','utf-8',function(error,data){
	if(error) throw err;
	console.log(data)
})

console.log(new Buffer("abcdefghijklmn"))
```
