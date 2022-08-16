// alert(fullName + '!' + fullName + '!' + fullName + '!' + fullName + '!' + fullName + '!' + fullName + '!' + age)
// alert(age + '!' + age + '!' + age + '!' + age);
/**
 alert('Hello world!');
 var fullName = 'Hello world'
 var age = 22;
 * 
 * 
 * 
 * 
 console.log('Hello world')
 console.log(fullName + '!' + fullName)
 confirm('ban đã đủ tuổi chưa')
 prompt('hãy điền mật khẩu')
 setTimeout(function() {
     alert('Hello world!');
 }, 1000)
 setInterval(function() {
     console.log('Hello world!' + Math.random());
 }, 1000)
 */


//  Toán tử số học
/*
var a =3;
var b =2;

var c = a + b;
var d = a - b;
var e = a * b;
var g = a / b;
var m = a ** b;
var h = a % b;
var i = ++a;
var j = --b;
console.log('c = ' + c + ' b = ' + b + ' e = ' + e + ' g = ' + g + ' h = ' + h + ' i = ' + i + ' j = ' + j +'m = ' + m);
*/

// Toán tử gán
var a =3;
var b =2;

a **= 5;

console.log(a);

var num = 6;
var output = ++num * 2 - num-- * 2;

var iscd = 0;
if (!(a>0)) {
    console.log('điều kiện đúng')
} else {
    console.log('điều kiện sai')

}


/**
 * ngoài các giá trị sau thì tất cả các giá trị đưa vào sẽ là true hết
 * 0
 * '' ""
 * undefined
 * NaN
 * null
 * false
 */

var k = 2;
var l = 3;

// kết quả nó sẽ lấy g vì khi giá trị trc đúng thì nó sẽ kiểm tra giá trị cuối và lấy biến sau cùng
var result = 'a' || 'c' || 'd' || 'as' || 'f' || 'g'

console.log(result)

if (result) {
    console.log('điều kiện đúng aa')
} else {
    console.log('điều kiện sai aa')
}

console.log(iscd);
if (iscd) {
    console.log('điều kiện đúng')
} else {
    console.log('điều kiện sai')
}

/*
vì ban đầu num++ nó là num copy nên chỉ lấy giá trị 6 còn giá trị thực thì num đã tăng lên 7
sau đó chuyển qua --num nên nó giảm từ num = 7 -> num = 6 nên kết quả sẽ ra 12;
 */

console.log('output: ' + output)


// Toán Tử nối Chuỗi
var first = 'bá'
first += 'trí'

console.log(first )

var c = 'tri'
var i = 'tri'

if (c===i) {
    console.log('Hlo world')
}else {
    console.log('sai')
}

// kiểu Symbol

var id = Symbol('id')
var id2 = Symbol('id')

console.log(id != id2)

var myfunc = function () {
    alert('Hlo world')
}
myfunc()

var myobj = {
    name: 'Hlo world',
    age: 12,
    address: 'ha noi',
    myunc: function () {
        console.log('Hlo world')
    }
}
console.log(myobj)

var myarr = [
    'hello',
    'php',
    12
]
console.log(myarr)
console.log(typeof myfunc)

var as = 1;
var ab = '1';

console.log(as !== ab)

console.log(Boolean(1)) // true
console.log(Boolean(['BMW'])) // true
console.log(Boolean({ name: 'Miu' })) // true

console.log(!!'hi') // true




