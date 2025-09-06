

console.log("Salom, Javascript!");

const pi = 3.14;
// pi = 3; // TypeError: Assignment to constant variable.
console.log(pi)

let name = "Asadbek";
console.log("name = ", name);

name = 5;
console.log("name = ", name);

// var 
function Name() {
    var age = 22;
    age = 23;
    console.log("age: ", age)
}

age = 25;
console.log("age: ", age)
// let va const

if (true) {
    let user_age = 25;
    const user_pi = 3;
    console.log("user age:", user_age,"user pi", user_pi );
}

// console.log("user age:", user_age,"user pi", user_pi ); //ReferenceError: user_age is not defined