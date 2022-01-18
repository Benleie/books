var http = require("http");
var fs = require('fs');

http.createServer(function(req, res){
	console.log(req.client)
	console.log(new Date())
	if(req.url == '/'){
		fs.readFile('./titles.json', function(err, data){
			if(err) {
				console.log(err);
				res.end('Server Error');
			}
			else {
				var songs = JSON.parse(data.toString());
				fs.readFile('./template.html', function(err, data){
					if(err) {
						console.log(err);
						res.end('Server Error');
					}
					else {
						var tmpl = data.toString();

						var html = tmpl.replace("%", songs.join("<li></li>"));
						res.writeHead(200, {'Content-Type':"text/hml"});
						res.end(html)
					}	
				})
			}
		})
	}
}).listen(8000, '127.0.0.1')

/*var server = http.createServer(function(req, res){

}).listen(7000, '127.0.0.1');
console.log(server)
function getTitles(res){
	fs.readFile('./titles.json', function(err, data){
		if(err) return hadError(err, res)
		
	}
}*/