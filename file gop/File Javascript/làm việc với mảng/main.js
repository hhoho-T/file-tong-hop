

var languages = [
    'javascript',
    'php',
    'ruby'
]


// Tostring là chuyển kiểu dữ kiệu array sang String

console.log(languages.toString())

// join biến mảng thành 1 chuỗi

console.log(languages.join(' '))

// pop xóa elements cuối mảng và trả lại phần tử cuối mảng ra màn hình

console.log(languages.pop())
console.log(languages.pop())
console.log(languages.pop())
console.log(languages.pop())
// khi nó xóa hết kh còn cái gì trong mảng thì sẽ trả về undefined
console.log(languages)

// push là thêm phần từ vào cuối mảng

var languages2 = [
    'javascript',
    'php',
    'ruby'
]

console.log(languages2.push('Drat', 'Java'))
console.log(languages2)

// shift xóa elements Đầu mảng và trả lại phần tử đầu mảng đã xóa ra màn hình

console.log(languages2.shift())
console.log(languages2.shift())
console.log(languages2.shift())
console.log(languages2.shift())
console.log(languages2.shift())
console.log(languages2.shift())
console.log(languages2)

// unshìt là thêm phần từ vào đầu mảng

var languages3 = [
    'javascript',
    'php',
    'ruby'
]

console.log(languages3.unshift('Drat', 'Java'))
console.log(languages3)

// splicing có nghĩa là xóa cắt hoặc thay thế và chèn phần tử mới vào 

var languages4 = [
    'javascript',
    'php',
    'ruby'
]
// tại vị trí thứ nhất, số 0 là ko xóa , và chèn javascript vào vị trí thứ nhất

languages4.splice(1, 0 , 'javascript')

console.log(languages4)

// CONCAT là hàm nối Array nếu có 2 array thì sẽ nối chúng lại

var languages5 = [
    'javascript1',
    'php2',
    'ruby3'
]

console.log(languages5.concat(languages4))

// slice nó dùng để cắt 1 vài Element của mảng

console.log(languages5.slice(1, 2))


function getLastElement(array) {
    return array.slice(2)
}



// Ví dụ sử dụng
var animals = ['Monkey', 'Tiger', 'Elephant'];
var result = getLastElement(animals);

console.log(result); // Expected: "Elephant"
console.log(animals); 

