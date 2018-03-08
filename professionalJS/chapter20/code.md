## The JSON Object
```js
console.log("ok")   //ok
console.log(JSON.stringify('ok'))  //"ok"
```

```js
var books = {
	1:{
		title: " Professional JavaScript ",
		authors: [" Nicholas C. Zakas"],
		edition: 3,
		year: 2011
	},
	2: {
		title: " Professional JavaScript ",
		authors: [" Nicholas C. Zakas"],
		edition: 4,
		year: 2018
	}
	
	
};

console.log(books)
var JSONstring = JSON.stringify(books)
// console.log(JSONstring)
var parsedJSON = JSON.parse(JSONstring)
console.log(parsedJSON)
```

## 
```js

```