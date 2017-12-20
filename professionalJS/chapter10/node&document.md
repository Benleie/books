DOM树：  HTML超文本标记语言的本质
### Node

属性 | 特征 | 备注
----|------|----
nodeType | 十二种类型1-12  |  value兼容，Node.ELEMENT_NODE这种Node type constants不兼容
nodeValue | 多数元素默认为null  | 使用之前最好检验一下nodeType的值
nodeName | 元素的标签名  | 
textContent | 获取节点内的所有文本 |
childNodes | 返回一个类数组的living的NodeList | NodeList中的节点可以有parantNode,previousSibling,nextSibling
ownerDocument | 迅速回到node树的顶端 | 有意义吗？直接用document呗


方法 | 特征 | 备注
----|------|----
appendChild() | 加到childNodes的最后，返回新添加的节点 |
insertBefore() | 第一个参数表示新插入的节点，第二个参数用来指代要插入的位置 |
replaceChild() | 一新二旧 | 被替换的节点仍然存在于document中，但是没有具体位置
removeChild() |   | 同上
cloneNode() | true深拷贝，false浅复制 | 浅复制的节点没有子节点；该方法不能拷贝event handlers
normolize() | 合并文本节点 |

### document
属性：documentElement指向<html>,body指向<body>.
	doctype,comments:各大浏览器存在很大差异
document类型是只读的，因而不在其上使用appendChild(),replaceChild(),removeChild()。


document info | 特征 | 备注
----|------|----
title | <title>元素的值，网页的标签页 |
与HTTP的request相关 | URL,domain,referrer | 只有domain是可写的，subdomain：只松不紧

+ Document的定位方法：
IE7的表单元素的name属性会被getElementById()错误获取。
getElementsByTagName()大小写不敏感。
HTMLCollection.namedItem()获取name属性的值。也可以用bracket notation

注意Document和HTMLDocument的区别  getElementsByName()


+ DOM一致性检测
document.implementation.hasFeature("","")  
in chrome永远返回true obsolete Deprecated



#### 另：
+ <lable>的for与<input>的id配合使用，对于像radio这样的选择项，点击label即可勾选。



