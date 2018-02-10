existsSync  mkdir writeFile

```javascript
var hh = "仅仅是writeFile就可以创建文件夹!"
if(!fs.existsSync('public')){
	fs.mkdir('public',0777, function (err) {
	  if (err) throw err;
	  console.log("succeed to mkdir:public");
	});
}

fs.writeFile('public/written.txt', hh, (err) => {
  if (err) throw err;
  console.log('It\'s saved!');
});
```
