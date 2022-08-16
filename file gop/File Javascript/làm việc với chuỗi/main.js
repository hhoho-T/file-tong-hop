var myString = '    học js tại js ffs js f8     '

// 2. find index có nghĩa là tìm dc 1 vị trí của 1 chữ trong 1 chuỗi nếu kh có nó sẽ trả về -1
// và nếu trong chuỗi có chữ lặp lại thì cần phải thêm số đằng sau để nó đếm từ số đó
// hoặc nếu muốn tìm kí tự cuối cùng thì cần phải dùng lastindexOf

console.log(myString.indexOf('js', 6))
console.log(myString.lastIndexOf('js'))
// hoặc dùng search để tìm nhưng nó khác với indexOf chỗ kh thể tìm khi có các chữ cái lặp lại
console.log(myString.search('js'))

// 3. cut String có nghĩa là cắt chuỗi

console.log(myString.slice(4, 6))
// hoặc cắt cả từ tham số thứ nhất nếu muốn cắt từ phải qua trái thì phải dùng số âm
console.log(myString.slice(4))

// 4. Replace thuộc tính ghi đè thay thế chữ trong chuỗi
// nếu muốn thay thế tất cả chữ lặp lại có trong chuỗi cần thêm /js/g

console.log(myString.replace(/js/g, 'javascript'))

// 5. Convert to uppercase là chuyển đổi tất cả các chữ trong chuỗi thành chữ cái hoa
console.log(myString.toUpperCase())

// 6. Convert to lowercase là chuyển đổi tất cả các chữ trong chuỗi thành chữ cái thường
console.log(myString.toLowerCase())
// 7. trim nó được dùng để xử lý các dữ liệu đầu vào của ng dùng nếu có khoảng trắng 2 bên nó sẽ tự động loại bỏ

console.log(myString.trim())

// 8. split cắt 1 chuỗi trong mảng array và phải tìm điểm chung của nó để tách ra thành array
var myString1 = 'javascript, PHP, Java'
var myString2 = 'javascript'

console.log(myString1.split(', '))
// chúng ta có thể cắt từng chữ cái trong 1 chuỗi ra từng chữ
console.log(myString2.split(''))

// 9. get a charactec by index dùng để đếm số thứ tự chữ cái trong 1 chuỗi rồi đưa chữ đó ra 
console.log(myString.charAt(15))
