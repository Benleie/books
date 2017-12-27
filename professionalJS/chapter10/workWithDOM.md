### Dynamic script
`<script></script>`标签的内在DOM逻辑。


## Dynamic style
+ dynamic styles don’t exist on the page when it is loaded initially; rather,
they are added after the page has been loaded.

+ Loading styles via an external file is asynchronous, so the styles will load out of order with the
JavaScript code being executed.

## Using NodeLists
+ Any time you want to iterate over a  NodeList , it’s best to initialize a second variable with the length and then compare the iterator to that variable.

+ DOM manipulations are some of the most expensive operations that can be done in
JavaScript, with  NodeList objects being particularly troublesome. 
+ it is best to minimize the number of DOM manipulations

+ 因为DOM解析器和JS引擎是浏览器的两部分，它们的通信和同步非常复杂，因为频繁的DOM操作会严重影响网页性能。目前好的解决方案是像react,vue那样创建一个虚拟DOM,即一个JS对象，将日常的DOM操作保存，然后统一和真实DOM比较差异，渲染。








