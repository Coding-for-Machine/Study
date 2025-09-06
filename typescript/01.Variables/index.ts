// Primitive Tiplar: Copy by Value
// strings

let myName: string = "Asadbek";
console.log(myName);
let myEmail: string = "codingformachine@gmail.com";
console.log(myEmail);
let is_active: boolean = true;
console.log(is_active);


// Numbers
let age: number = 25;
console.log(age);

// boolean
let isHard: boolean = false;
isHard = true;
console.log(isHard);

/*
Type inference — bu 
TypeScript dasturlash tilida
o'zgaruvchining tipini 
avtomatik ravishda aniqlash 
jarayoni. TypeScript o'zgaruvchining qiymatini
ko'rib chiqib, unga mos bo'lgan tipni 
taxmin qiladi. Buning natijasida, ko'pincha
tipni aniq belgilash shart bo'lmaydi, 
chunki TypeScript o'zi tipni aniqlay oladi.

*/
let age = 25;  // TypeScript 'age' ni 'number' deb aniqlaydi
let name = "Alice";  // TypeScript 'name' ni 'string' deb aniqlaydi
