


/*console.log(/bo.x/ig.exec("this is box,that is BOX,and bosx"))

var path = "D:\\learnByDo\\awecg.github.io\\blog\\themes\\landscape\\";
console.log(/\\themes\\/ig.test(path))
console.log(RegExp.lastMatch)
console.log(path.replace(RegExp.rightContext, "next"))


*/


var str='Who are you? I\'m a boss and I want an banana'
console.log(str.match(/\ba/g))
console.log(str.replace(/\ba/g, 'aaa'))

function isMD(arr){
	var RE = [/\.md$/, /\.mdown$/, /\.markdown$/, /\.markdn$/]
	return !RE.every(value => !value.test("hhh.md"))
}
console.log(isMD())
console.log(/\.md$/.test("hh.md"))
// console.log(/[md]|[mdown]$/.test("hh.markssdoswnss"))

