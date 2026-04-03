const express = require('express');
const app = express();

app.get('/', (req,res)=>res.send("Home"));
app.get('/about', (req,res)=>res.send("About"));
app.get('/contact', (req,res)=>res.send("Contact"));
app.get('/services', (req,res)=>res.send("Services"));
app.get('/help', (req,res)=>res.send("Help"));

app.listen(3000);