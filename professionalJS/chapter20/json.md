JSON parsed into a usable object in JavaScript  || XML parsed into a DOM document

JSON could be passed directly to eval() and didn’t require the creation of a DOM.

## Syntax
Simple Values: JSON strings must use double quotes to be valid (single quotes causes a syntax error).

Objects: object property names in JSON must always be double-quoted.

Arrays: Objects and arrays are typically top-level parts of a JSON data structure (even though this is not required)


## The JSON Object
 eval() could parse, interpret, and return the data as JavaScript objects and arrays. 

+ JSON.stringify()  serialize JavaScript objects into a JSON string
By default, without any extra white space or indentation

+ JSON.parse() parse JSON into a native JavaScript value 


## Serialization Options
JSON.stringify(value[, replacer [, space]])

`undefined、任意的函数以及symbol值，在序列化过程中会被忽略（出现在非数组对象的属性值中时）或者被转换成 null（出现在数组中时`  ---MDN

#### replacer 
+ returning  undefined will result in the property being omitted from the result.

+ filters apply to all objects contained in the object to be serialized 

+ 第三个参数可以是字符串或者数字   limits to 10


#### toJSON()
+ its name must be "toJSON"
+ 不是对象被序列化，而是调用 toJSON 方法后的返回值会被序列化
+ the order of a serialization process


## Parsing Options
JSON.parse(text[, reviver])

