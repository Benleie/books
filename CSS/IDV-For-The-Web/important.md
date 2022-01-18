### Scales
domain 定义域  range 值域
Normalization




### Axis
Axes---lines, labels, and ticks

#### Formatting Tick label
var formatAsPercentage = d3.format(".1%");
xAxis.tickFormat(formatAsPercentage);


rangRound()
 shape-rendering: crispEdges
 
##### Update scale domain
    yScale.domain([0, d3.max(dataset)]);

##### 如何更新坐标轴
    svg.select('.x.Axis').call(xAxis);
    svg.select('.y.Axis').call(yAxis);


### Transition   
interpolated over time

Make sure to always set an initial value before attempting to transition to a new value.

easing    ease()   d3.easeCubicInOut