## 为了性能，尽量避免使用__prototype__
+ 作为setter属性时：用Object.create()代替__proto__
Dog.prototype.__proto__ = EventEmitter.prototype;
写成Dog.prototype = Object.create(EventEmitter.prototype)
+  作为getter属性时：Object.getPrototypeOf()代替之。比如：
`Cat.prototype.__proto__ === Object.getPrototypeOf(Cat.prototype)`

+ prototype对象是实例的原型对象，被实例继承，那__proto__是什么？