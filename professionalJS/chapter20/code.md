## The JSON Object
```js
console.log("ok")   //ok
console.log(JSON.stringify('ok'))  //"ok"
console.log(JSON.parse('\"' + 'ok' + '\"'))  
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

## Serialization Options
#### Filtering Results
```js
var book = {
	title: " Professional JavaScript ",
	authors: [" Nicholas C. Zakas"],
	edition: 3,
	year: 2011
};
var jsonText = JSON.stringify(book, ['title','edition'])
console.log(jsonText)
```

```js
var book = {
	title: " Professional JavaScript ",
	authors: [" Nicholas C. Zakas", "no one else"],
	edition: 3,
	year: 2011
};

var books = [{
		title: " Professional JavaScript ",
		authors: [" Nicholas C. Zakas"],
		edition: 3,
		year: 2011
	},
	{
		title: " Professional JavaScript ",
		authors: [" Nicholas C. Zakas"],
		edition: 4,
		year: 2018
	}]
	
function replacer(key, value){
	switch(key){
		case "authors": 
			return value.join(",");
		case "year": 
			return 5000;
		case "edition":
			return undefined;
		default: 
			return value
	}
}	


console.log(JSON.stringify(book, replacer))
console.log(JSON.stringify(books, replacer))
```

#### String Indentation
```js
var book = {
	title: " Professional JavaScript ",
	authors: [" Nicholas C. Zakas", "no one else"],
	edition: 3,
	year: 2011
};

console.log(JSON.stringify(book))
console.log(JSON.stringify(book, null, 4))
console.log(JSON.stringify(book, null, "- -"))
```

#### toJSON()
```js
var book = {
	title: "Professional JavaScript ",
	authors: ["Nicholas C. Zakas", "no one else"],
	edition: 3,
	year: 2011,
	toJSON(){
		//return this.title
		return this
	}
};
console.log(JSON.stringify(book, null, 4))
```


## Parsing Options
```js
var book = {
	title: "Professional JavaScript ",
	authors: [" Nicholas C. Zakas", "no one else"],
	edition: 3,
	year: 2011,
	releaseDate: new Date(2011, 11, 1)
};

console.log(JSON.parse(JSON.stringify(book)))
console.log(book.releaseDate.getFullYear())
console.log(Object.getPrototypeOf(book.releaseDate))    //Date {}


var bookCopy = JSON.parse(JSON.stringify(book), function(key, value){
	if(key === "releaseDate"){
		// console.log(typeof value)    //string
		return new Date(value)
	}
	else
		return value;
	
});
console.log(bookCopy.releaseDate.getFullYear())
```

