// Tạo hàm mới

function showDialog() {
    var a = 3;
    var b = 2;
    console.log(a + b)
}

showDialog()
 
/**
 * khi gọi tham số message vào hàm showModal  thì bên dưới hàm showDialog có thể ghi các kí tự vào bên trong
mà không cần phải thông qua hàm để console.log ra
 
* khi ta viết các kí tự vào trong hàm showModal thì được gọi là ĐỐI SỐ

 */
// function showModal(message, message2) {
//     console.log(message)
//     console.log(message2)
// }


// showModal("hi ae test tham số nha :))", 'hi ae test tham số')


// KHI dùng typeof cùng với tham số nó sẽ cho ta biết các kiểu dữ liệu
// function howModal(message) {
//     console.log(typeof message)
// }


// howModal()

function howModal() {
    console.log(arguments)
}
howModal('ầv', 1, 'âfg');

// dùng vòng for

function showModal() {
    // for (var i = 0; i < arguments.length; i++) {
    //     console.log(arguments[i]);
    // }
    var box = ''
    for(var parm of arguments) {
        // console.log(parm)
        // in thêm dấu gạch ngang
        box += `${parm} - `
    }
    console.log(box);
}
showModal(1, 2 , 3 , 'ss', 'được')

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
