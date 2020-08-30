var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function distanciadp( xp1,  yp1,  xp2,  yp2 )
{
    var base = Math.pow((xp2 - xp1) ,2) + Math.pow((yp2 - yp1), 2);
    return Math.sqrt( base );
}

var linha1 = lines[0].split(" ");
var linha2 = lines[1].split(" ");

xp1 = parseFloat( linha1[0] );
xp2 = parseFloat( linha2[0] );
yp1 = parseFloat( linha1[1] );
yp2 = parseFloat( linha2[1] );

var distancia = distanciadp(xp1, yp1, xp2, yp2)
console.log(distancia.toFixed(4));