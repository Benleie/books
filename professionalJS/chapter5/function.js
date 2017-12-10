


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


*/




function createComparisionFunction(propertyName){
	return function(object1, object2){
		var value1 = object1[propertyName];
		var value2 = object2[propertyName];
		if(value1 > value2) return -1;
			else if (value1 < value2) return 1;
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













