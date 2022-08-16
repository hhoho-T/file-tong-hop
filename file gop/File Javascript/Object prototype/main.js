
    // XÂY DỰNG ĐỐI TƯỢNG

// Object prototype nó giống kiểu cấu thành 1 đối tượng


    // thiết kế ra mô tả cho đối tượng sau này
function User(firstName, lastName, avatar) {    
    this.firstName = firstName;
    this.lastName = lastName;
    this.avatar = avatar;


    this.getName = function() { 
        return `${this.firstName} ${this.lastName} ${this.avatar}`;
    }
}

// tạo hàm prototype và nó giúp tạo thêm 1 thuộc tính ở bên ngoài hàm tạo

User.prototype.className = 'kul'
User.prototype.getClassName = function() {
    return this.className
}


// tạo đối tượng

var author = new User('bá', 'trí', 'avatar')
var user = new User('đức', 'cống', 'avatar')


// xem bản thiết kế có giống nhau kh

console.log(author.getName());
console.log(user.getClassName());


