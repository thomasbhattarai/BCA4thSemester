// let fruits = ['apple', 'banana', 'orange'];
// fruits.forEach(function(fruit) {
//     console.log(fruit);
// });
// function greet(name) {
//     return "Hello " + name;
// }
// console.log(greet("Alice"));
// let currentDate = new Date();
// console.log(currentDate);
// document.getElementById("button").addEventListener("click", function() {
//     alert("Button Clicked!");
// });
function validateForm() {
    let x = document.forms["myForm"]["name"].value;
    if (x == "") {
        alert("Name must be filled out");
        return false;
    }
}
