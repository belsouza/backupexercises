//var input = require('fs').readFileSync('stdin.txt', 'utf8');
var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var peso1 = 3.5;
var peso2 = 7.5;

function media( nota1, nota2 ){
    return ((( nota1 * peso1) + (nota2 * peso2)) / 11.0);
}

var p1 = parseFloat( lines.shift() );
var p2 = parseFloat( lines.shift() );
var med = media( p1, p2 );
console.log('MEDIA = ' + med.toFixed(5));