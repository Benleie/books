/*
*  2018-02-12  
*  watch a folder, once added a file, rename it into lowercase form and cut it to ' tdone' folder.
*/

var events = require('events'),
	util = require('util'),
	fs = require('fs');
var watchDir = "./watch",
	processedDir = './done'


function Watcher(watchDir, processedDir){
	this.watchDir = watchDir;
	this.processedDir = processedDir;
}

util.inherits(Watcher, events.EventEmitter)
// Watcher.prototype = new events.EventEmitter();
Watcher.prototype.watch = function(){
	var watcher = this
	fs.readdir(this.watchDir, function(err, files){
		if(err) throw err;
		for(var index in files)
			watcher.emit('process', files[index])
	})
}
Watcher.prototype.start = function(){
	var watcher = this;
	fs.watchFile(watcher.watchDir, function(){
		watcher.watch();
	})
}

var watcher = new Watcher(watchDir, processedDir);
watcher.on('process', function(file){
	var watchFile = this.watchDir + '/' + file;
	var processedFile = this.processedDir + '/' + file.toLowerCase();
	// fs.rename include actions of deleting and copying
	fs.rename(watchFile, processedFile, function(err){
		if(err) throw err;
	})
	console.log("renamed!")
})

watcher.start()




