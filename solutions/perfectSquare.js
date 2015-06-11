start:
for(var z=1;; z++) {
  for(var p = 1; 3*z-p*p > 0; p++) {
    var x = p*p + z;
    var xpz = Math.sqrt(x+z)
    if(xpz !== Math.floor(xpz)) {
        continue;
    }
    for(var k = p-1; k > 0 ; k--) {
      var y = z + k*k;

      var xmz = Math.sqrt(x-y)
      var xpy = Math.sqrt(x+y)
      var ypz = Math.sqrt(y+z)
      if( xmz === Math.floor(xmz) && ypz === Math.floor(ypz) && xpy == Math.floor(xpy) ) {
        console.log(z, y, x);
        console.log("z + y + x =", z + y + x);
        break start;
      }
    }
  }
}

//Important Facts
// x > y > z
// -> (x-z) > (y-z) > 0 
// -> (x-z) > 0 
// -> (y-z) > 0 
// x-z = p^2
// y-z = k^2

// Imagine the number line
//
// 
// Z            Y            X
// |------------|------------|
// 
// |-------------------------| this distance is p^2
// |------------| this distance is k^2
