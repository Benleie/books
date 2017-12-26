



+ DOM level 2/3的六大模块：DOM core, DOM Views, DOM events, DOM Style, DOM Traversal and Range, DOM HTML.
当然CSSOM的引入让DOM2的很多Style的Specifications成了obsolete.
+ HTMLElement.style = [object CSSStyleDeclaration] 可写
it represents only the CSS declarations set in the element's inline style attribute, not those that come from style rules elsewhere, such as style rules in the `<head>` section, or external style sheets.
To get the values of all CSS properties for an element you should use window.getComputedStyle() instead.
+ CSSStyleDeclaration是CSSOM(CSS Object Model)的对象。
+ A style sheet consists of rules ----- style rules & at rules















