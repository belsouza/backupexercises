var input = require('fs').readFileSync('/dev/stdin','utf8');
//var input = require('fs').readFileSync('stdin.txt','utf8');
var lines = input.split('\n');

function calcular( npecasA, valorA, npecasB, valorB){
    return (( npecasA * valorA ) + ( npecasB * valorB));
}

var plinha1 = lines[0].split(" ");
var plinha2 = lines[1].split(" ");


npecasA = parseInt(plinha1[1]);
valorA = parseFloat(plinha1[2]);

npecasB = parseInt(plinha2[1]);
valorB = parseFloat(plinha2[2]);

foo = calcular( npecasA, valorA, npecasB, valorB );

console.log( "VALOR A PAGAR: R$ " + foo.toFixed(2) );

