// tạo ra 1 Object

var emailKey = 'email'

var myObject = {
    // thuộc tính
    name: 'Bá trí',
    age: 19,
    address: 'Hà nội',
    [emailKey]: 'bati@gmail.com',

    // phương thức
    // sử dụng hàm function và this để thay thế cho myObject
    getAge: function () {
        return this.age
    }
}

/**
 nếu bình thường các định nghĩa về tên như name hoặc age thì nó sẽ là key
 còn nếu nó được gọi bằng function thì được gọi là phương thức
 * function --> phương thức / method
 * others --> Thuộc tính / property
 */


// xóa đi 1 myKey trong Object
delete myObject.name

myObject['my-email'] = 'bá trí'

var myKey = 'address'
console.log(myObject.getAge())
console.log(myObject[myKey])