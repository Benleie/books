var events = require("events")
var net = require("net")

var channel = new events.EventEmitter()
channel.clients = {}
channel.subscriptions = {};

channel.on('join', function(id, client){
	this.clients[id] = client;
	this.subscriptions[id] = function(senderId, message){
		// if(id != senderId) this.clients[id].write(message);
		console.log("broadcast")
	}
	this.on('broadcast', this.subscriptions[id]);
	console.log(this)
});

var server = net.createServer(function(client){
	var id = client.remoteAddress + ':' + client.remotePort;
	console.log(id)
	client.on('connect', function(){
		channel.emit('join', id, client);
		console.log("connected!")
	});
	client.on('data', function(data){
		data = data.toString()
		channel.emit('broadcast', id, data)
		console.log(data)
	})
});
server.listen(8888);
// telnet 127.0.0.1 8888




/*

channel.on('broadcast', function(senderId, message){
	console.log("me")
})
*/