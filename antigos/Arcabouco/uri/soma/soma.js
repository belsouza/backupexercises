/*
var input = require('fs').readFileSync('/dev/stdin','utf8');
var lines = input.split('\n');

function soma(a, b){
    return(a+b);
}

var a = parseInt(lines.shift());
var b = parseInt(lines.shift());
console.log("SOMA ="+ soma(a,b));

*/

(function(){

    function soma(a, b){
        return(a+b);
    }

    var a = 15;
    var b = 30;
    console.log("SOMA = "+ soma(a,b));
}).call();