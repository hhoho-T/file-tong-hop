
    // XÂY DỰNG ĐỐI TƯỢNG

    // thiết kế ra mô tả cho đối tượng sau này
function User(firstName, lastName, avatar) {    
    this.firstName = firstName;
    this.lastName = lastName;
    this.avatar = avatar;


    this.getName = function() { 
        return `${this.firstName} ${this.lastName} ${this.avatar}`;
    }
}
var User = function(firstName, lastName, avatar) {    
    this.firstName = firstName;
    this.lastName = lastName;
    this.avatar = avatar;


    this.getName = function() { 
        return `${this.firstName} ${this.lastName} ${this.avatar}`;
    }
}

// tạo đối tượng

var author = new User('bá', 'trí', 'avatar')
var user = new User('đức', 'cống', 'avatar')

author.titile = 'Anh chị cho em hỏi là this thì nó để làm gì ạ, em cám ơ';
user.comment = 'Mình học lại lần 2 mới hiểu 😂';

// xem bản thiết kế có giống nhau kh

console.log(author.constructor === User);
console.log(author.getName());
console.log(user.getName());

