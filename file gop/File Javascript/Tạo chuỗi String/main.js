// 2 cách tạo chuỗi
// cách 1
var fullName = 'Hello World'
+ '1.Hello World'
+ '1.Hello World'
+ '1.Hello World'
+ '1.Hello World'
+ '1.Hello World'


// dùng thêm length để tính độ dài của chuỗi
// console.log(fullName.length)
console.log(fullName)

var firstName = 'bá'
var lastName = 'trí'

// cách 1
console.log(firstName + ' ' + lastName)

// cách 2
console.log(`tôi là : ${firstName} ${lastName}`)

// cách 2 dung để tính độ dài của chuỗi nhưng nó khong phù hợp vì khá dài nên chỉ dùng cách số 1

// var fullName1 = new String('bá trí')
// console.log(fullName1)