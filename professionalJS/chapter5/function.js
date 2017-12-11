


/*
function sum(num1, num2){
return num1 + num2;
}
console.log(sum(10,10)); //20
var anotherSum = sum;
console.log(anotherSum(10,10)); //20
sum = null;
console.log(anotherSum(10,10)); //20


//TypeError: sum is not a function
console.log(sum())
var sum = function sum(){
	return 2;
}    

console.log("aa" < "bb")




function createComparisonFunction(propertyName){
	return function(object1, object2){
		var value1 = object1[propertyName];
		var value2 = object2[propertyName];
		if(value1 > value2) return 1;
			else if (value1 < value2) return -1;
			else return 0;
	}
}
var data = [
	{name: "Zachary", age: 28}, 
	{name: 'Nicholas', age: 29}, 
	{name: "Sunhonglei", age: 43},
	{name: "Wangliqun", age: 74},
	{name: "Zhonghongjie", age: 20},
	{name: "Madongmei", age:34}
	];
data.sort(createComparisonFunction('name'));
console.log(data)
console.log()
data.sort(createComparisonFunction('age'));
console.log(data)






function factorial(num){
	return num === 1 || num * factorial(num - 1)
	//if(num <= 1) return 1
	//return num * factorial(num - 1)
}

function factorial2(num){
	return num === 1 || num * arguments.callee(num - 1)
}
console.log(factorial(5))
console.log(factorial2(6))



color = "red";
var o = { color: "blue" };
function sayColor(){
	console.log(this.color);
}
sayColor(); 
o.sayColor = sayColor;
o.sayColor(); 




//"use strict"
function outer(){
	inner()
	console.log(arguments.callee.caller)
}
function inner(){
	console.log(inner.caller)
}
outer()





function sayName(name){
	console.log(name);
}
function sum(num1, num2){
	return num1 + num2;
}
function sayHi(){
	console.log("Hi~")
}
console.log(sayName.length)
console.log(sum.length)
console.log(sayHi.length)


function sum(num1, num2){
	return num1 + num2;
}
function callSum1(num1, num2){
	return sum.apply(this, arguments); //passing in arguments object
}
function callSum2(num1, num2){
	return sum.apply(this, [num1, num2]); //passing in array
}
console.log(callSum1(10,10))
console.log(callSum2(10,10))


+function inner(){
	console.log(inner.caller.toString())
}()

+function inner(){
	console.log(this)
}()

+ function a(){
	console.log(a.toString())
}()
*/










