`xhr.send(null);`
No 'Access-Control-Allow-Origin' header is present on the requested resource. Origin 'null' is therefore not allowed access.

## xhr.status为0
+ If the state is UNSENT or OPENED, return 0.
+ If the error flag is set, return 0.
+ 状态码是0表示没有发出ajax请求