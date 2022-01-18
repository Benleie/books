+ nodemon对递归处理得不是很好，直接就死循环了。

```javascript
var fs = require("fs"),
	  stat = fs.stat;
var copy = function(src, dst){
	fs.readdir(src, function(error, paths){
		if(error) throw error;

		paths.forEach(function(path){
			var _src = src + "/" + path,
				_dst = dst + "/" + path,
				readable,
				writable;

			stat(_src, function(err, state){
				if(err) throw err;
				if(state.isFile()){
					readable = fs.createReadStream(_src);
					writable = fs.createWriteStream(_dst);
					readable.pipe(writable);
				}
				else if(state.isDirectory()){
					existsSync(_src, _dst, copy);
				}
			});
		})
	})
}
var existsSync = function(src, dst, callback){
	if(!fs.existsSync(dst)){
		fs.mkdir(dst,0777, function (err) {
		  if (err) throw err;
		  console.log("succeed to mkdir:" + dst);
		});
	}

	callback(src, dst);
}

existsSync("public", "git", copy);
```
