// let x = { name: "Nikhil" };
// let y = { girlfriend: "Dilpreet" };

// console.log(x.name);
// console.log(x["name"]);

// x.age = 23;
// x["email"] = "abc@icloud.com";
// console.log(x);

// //x.__proto__ = y;
// Object.setPrototypeOf(x, y);

// console.log(x.girlfriend);
// console.log(Object.getPrototypeOf(x));

// let x = { name: "Nikhil" };
// let f = function (k, v) {
//   this[k] = v;
// };

// x.method = f;

// x.method("color", "red");
// console.log(x);

// f("name", "Dilpreet");
// console.log(global.name);

// let y = new f("size", "big");
// console.log(y);
// console.log(y.size);

// let z = new x.method("size", "small");
// console.log(z);
// console.log(z.size);

// let w = {};
// x.method.call(w, "condition", "used");
// console.log(x);
// console.log(w);

function Car() {
  this.set = function (k, v) {
    this[k] = v;
  };
}

let c = new Car();
console.log(c);

c.set("color", "black");
console.log(c);

let f = c.set;
console.log(f);
f("name", "Nikhil");
console.log(f);
console.log(global.name);

console.log("\n\nThis that");

function Truck() {
  let that = this;
  this.set = function (k, v) {
    that[k] = v;
  };
}

let t = new Truck();
console.log(t);

let f1 = t.set;
f1.prototype.color = "red";
console.log(f1.prototype);

console.log(f1.color);
f1("size", "big");

console.log(t);

let x = new f1("engine", "v8");
console.log(x);
console.log(t);

let set = require("./set");

let s = new set();
s.add(5);
console.log(s);
