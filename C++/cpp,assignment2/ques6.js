const http = require('http');

http.createServer((req, res) => {

    if(req.method === "GET") {
        res.write("GET Request");
    }

    if(req.method === "POST") {
        res.write("POST Request");
    }

    res.end();

}).listen(3000);