var canadianDollar = 0.91
function round(amount){
	return Math.round(amount*100)/100;
}
exports.canadianToUs = function(canadian){
	return round(canadian * canadianDollar)
}
exports.USToCanadian = function(us){
	return round(us / canadianDollar);
}
console.log(exports === module.exports)
// console.log(module)



