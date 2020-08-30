var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

    function produto( a, b )
    {
        return a * b;
    }
    
    var a = parseInt( lines.shift() );
    var b = parseInt( lines.shift() );
    console.log('PROD = ' + produto(a, b));

