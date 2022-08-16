// cách tạo mảng ARRAY VÀ NÓ CÓ THỂ CHỨA ĐƯỢC TẤT CẢ CÁC KIỂU DỮ LIỆU

// cách 1

var language = [
    'javascript',
    'php',
    'ruby',
    'java',
    null,
    undefined,
    function () {

    },
    {}
]
console.log(language)
// cách 2
var languages = new Array(
    'javascript',
    'php',
    'ruby',
    'java',
    null,
    undefined,
    function () {

    },
    {}
)
console.log(typeof languages)

// cách kiểm tra xem đối tượng có là Array hay kh vì nếu thay languages bằng dấu {} và dấu [] thì nó cx là kiểu Object

console.log(Array.isArray(languages))

/**
 * TRUY XUẤT MẢNG
 * ĐỘ DÀI CỦA MẢNG
 */
console.log(languages.length)

// lấy ra 1 mảng trong cả mảng

console.log(languages[2])

