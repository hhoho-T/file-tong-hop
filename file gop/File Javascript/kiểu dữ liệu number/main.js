var otherNumber = new Number(9);
console.log(typeof otherNumber)

var age = 9;
var pi = 3323.145634255
console.log(age, pi)

// tạo ra 1 số không hợp lệ

var result = 20 / 'avc'

// nó sẽ in ra NaN đó là 1 kiểu số không hợp lệ
console.log(result)
// cách kiểm tra hàm đó có in ra 1 kiểu số không hợp lệ và nếu nó kh hợp lệ thì in ra true và nếu hợp lệ thì in ra false
var myString = pi.toString();
console.log(myString)

console.log(isNaN(result))

// To String
// và khi in ra số màu đen là kiểu string

console.log(age.toString())

// ToFixed là phương thức làm tròn đến chữ số thập phân

console.log(pi.toFixed(3))
