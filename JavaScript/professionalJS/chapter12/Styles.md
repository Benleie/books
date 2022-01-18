

##CSSOM
+ DOM level 2/3的六大模块：DOM core, DOM Views, DOM events, DOM Style, DOM Traversal and Range, DOM HTML.
当然**CSSOM的引入**让DOM2的很多Style的Specifications成了obsolete.

+ HTMLElement.style = [object CSSStyleDeclaration] 可写
it represents only the CSS declarations set in the element's inline style attribute, not those that come from style rules elsewhere, such as style rules in the `<head>` section, or external style sheets.
To get the values of all CSS properties for an element you should use window.getComputedStyle() instead.

+ CSSStyleDeclaration是CSSOM(CSS Object Model)的对象。CSSStyleSheet, CSSStyleRule, CSSStyleDeclaration.

+ A style sheet consists of rules ----- style rules & at rules

####添加和删除rules
+ 当要添加大量的rules时，it’s better to use the dynamic style loading technique


## Element Dimensions
determine the actual dimensions of elements on a page
+ Offset Dimensions  包含scrollbar和border的宽高
+ Client Dimensions  contents and its padding
+ Scroll Dimensions
+ Determining Element Dimensions    getBoundingClientRect()










