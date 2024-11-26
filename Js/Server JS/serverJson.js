const http = require('http');

const app = http.createServer(function (req, res) {
    res.setHeader('Content-Type', 'application/json');

    res.write(JSON.stringify(
        {
            id: 1,
            user: {
                name: "divij",
                age: 5
            }
        }));
    res.end()
});

// PORT = 4000
app.listen(4000);

// to run the server type in termial-

// node serverJson.js
