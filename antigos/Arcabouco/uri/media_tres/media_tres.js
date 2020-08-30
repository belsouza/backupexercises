//var input = require('fs').readFileSync('stdin.txt', 'utf8');
var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var peso1 = 2.0;
var peso2 = 3.0;
var peso3 = 5.0;

function media( nota1, nota2, nota3 ){
    return ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);
}

var p1 = parseFloat( lines.shift() );
var p2 = parseFloat( lines.shift() );
var p3 = parseFloat( lines.shift() );

var med = media( p1, p2, p3 );
console.log('MEDIA = ' + med.toFixed(1));