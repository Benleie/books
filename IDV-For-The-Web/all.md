### Scales
v4共7种scale:Continous,Sequential,Diverging,Quantize,Quantile(分位数),Threshold(阈值),Ordinal.
qualitative 定性的  quantitative 定量的

```js
var colorScale = d3.scaleThreshold()
				   .domain([15, 50])
				   .range(["red", "navy", "green"]);
```


domain 定义域  range 值域   Normalization 

d3.format()    number.toFixed()  number.toPrecision()
 


### Axis
Axes---lines, labels, and ticks

#### Formatting Tick label
var formatAsPercentage = d3.format(".1%");
xAxis.tickFormat(formatAsPercentage);


rangRound()
 shape-rendering: crispEdges