const fs = require('fs');

fs.writeFileSync("test.txt", "Hello Node.js");

fs.readFile("test.txt", "utf8", (err, data) => {
    console.log(data);
});