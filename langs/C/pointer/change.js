function changeFail(pp){
	var b = 7;
	pp = b;
}
function change(pp){
	var b = 7;
	return pp = b;
}
var a = 5;
// changeFail(a);
a = change(a)    //如果不赋值的话，又有什么办法改变a的值呢？这种指针的问题在JS中没有应用吧。

console.log(a)







