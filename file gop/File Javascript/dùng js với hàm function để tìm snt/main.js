function test() {
    var n = 5;
    if (n < 2 ) {
        console.log('la snt')
    } else {
    for (var i = 2; i <= Math.sqrt(n); i++) {
        // console.log('test thử for '+ i)
        // if(i % 2 == 0) {
        //     console.log(i);
        // }
            if(n % i == 0) {
                console.log('ko là snt')
            } else { 
                console.log('la snt')
        }
    }
}
}
test()  