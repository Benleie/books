+ ECMA-262 defines an object as an "unordered collection of properties each of which contains a primitive value, object, or function."
+ 215-257

## UNDERSTANDING OBJECTS
+ Data Properties
	+ the default property attributes: Configurable Enumerable Writable Value
	+ setting configurable to false means that the property cannot be removed from the object.
	+ Object.defineProperty()
+ Accessor Properties 
	+ Configurable Enumerable Get Set
+ Defining Multiple Properties   Object.defineProperties()
+ Object.getOwnPropertyDescriptor()

## Object Creation
### The Factory Pattern
```js
function createPerson(name, age, job){
	var o = new Object();
	o.name = name;
	o.age = age;
	o.job = job;
	o.sayName = function(){
		console.log(this.name);
	};
	return o;
}
var person1 = createPerson("Nicholas", 29, "Software Engineer");
```
+ With no way to define classes in ECMAScript,developers created functions to encapsulate the creation of objects with specific interfaces 
+ this solved the problem of creating multiple similar objects
+ the factory pattern didn't address the issue of object identification (what type of object an object is)


### The Constructor Pattern
```js
function Person(name, age, job){
	this.name = name;
	this.age = age;
	this.job = job;
	this.sayName = function(){
		console.log(this.name);
	};
}
var person1 = new Person("Nicholas", 29, "Software Engineer");
console.log(person1.constructor == Person)
console.log(person1 instanceof Object)
console.log(person1 instanceof Person)
```

+ with the following exceptions:
	+ There is no object being created explicitly
	+ The properties and method are assigned directly onto the this object
	+ There is no return statement.
+ Constructors as Functions
	+ constructors in ECMAScript are used to create specific types of objects
	+ constructors are simply functions that create objects
	+ Any function that is called with the new operator acts as a constructor
+ Problems with Constructors
	+ duplicate functions(methods are created once for each instance)



## 为了性能，尽量避免使用__prototype__
+ 作为setter属性时：用Object.create()代替__proto__
Dog.prototype.__proto__ = EventEmitter.prototype;
写成Dog.prototype = Object.create(EventEmitter.prototype)
+  作为getter属性时：Object.getPrototypeOf()代替之。比如：
`Cat.prototype.__proto__ === Object.getPrototypeOf(Cat.prototype)`

+ prototype对象是实例的原型对象，被实例继承，那__proto__是什么？