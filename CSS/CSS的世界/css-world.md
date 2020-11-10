
## 1 概述

## 2 需提前了解的术语和概念

## 3 流、元素与基本尺寸

## 4 盒尺寸四大家族
+ 功勋卓越的border属性
  + border； border-width, border-style, border-color
    + border-width: medium 3px
    + border-style: none;
  + 没有下边框的边框效果
    ```css
    div {
      border: 1px solid;
      border-bottom: 0 none;
    }
    ```
  + IE8在不支持圆角属性border-radius的情况下，利用dotted实现圆角

## 5 内联元素与流

## 6 流的破坏与保护
+ absolute的流体特性
  + 对立方向同时发生定位时
  + `box-sizing:border-box;`
  + 绝对定位元素可以让垂直方向和水平方向同时保持流动性
  + 垂直居中,不使用负边距和百分比transform
    ```css
    .element {
      width: 300px; height: 200px;
      position: absolute; 
      left: 0; right: 0; top: 0; bottom: 0;
      margin:auto;
    }
    ```
+ position: relative
  + 

## 7 CSS世界的层叠规则

## 8 强大的文本处理能力

## 9 元素的装饰与美化

## 10 元素的显示与隐藏