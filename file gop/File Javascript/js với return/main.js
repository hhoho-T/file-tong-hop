// var isConfirm = confirm('Are you sure you want to delete this file?')

// console.log(isConfirm)


// Trong 1 hàm không trả về giá trị thì nó sẽ trả về undefined

function cong(a, b) {
    // return a + b
    // nó có thể trả về mảng
    // return [a, b]
    // nếu thêm toString thì nó sẽ thanh chuỗi kh còn là kiểu dữ liệu số nguyên
    return a.toString() + b.toString()
    // nếu return ở đứng đằng trc thì tất cả các vế sau sẽ kh bao h được thực thi
    // còn nếu vế sau mà đứng trước return thì nó sẽ chạy trc sau đó đến vế return
    console.log(1322)
}

var result = cong(4, 5)

console.log(result)

function showMessage1() {
    console.log('message')
    function showMessage2() {
        console.log('message 2')
    }
    showMessage2()
}
showMessage1()

function showMessage() {

    var fullName = 'bá trí'
    console.log(fullName)
}

showMessage()

// DECLARATION FUNCTION
// và trong này có 1 khái niệm khi ta chưa định nghĩa function mà gọi nó ra trc thì nó vẫn chạy ra đúng kêt quả
// đó đc gọi là hosting và chỉ mình declaration function mới đc định nghĩa

showMessag()
function showMessag() {
    console.log('message')
}



// Expression function nó có thể đặt tên trc function để định nghĩa việc cần làm với nó

var sure2 = function autoMessger() {
    console.log('message3')

}
sure2()


// setTimeout(function autoLogin() {

// })

// var myObject = {
//     myFunction: function autoLogout() {

//     }
// }