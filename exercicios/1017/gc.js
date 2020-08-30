var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var th = parseFloat(lines.shift());
var v = parseFloat(lines.shift());
var ql = (th * v) / 12.0;
console.log(ql.toFixed(3));