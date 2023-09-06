// Змінна в глобальній області видимості
var globalVar = "Global Variable";

function globalFunction() {
    console.log(globalVar); // Виведе "Global Variable"
}

globalFunction();
console.log(globalVar); // Виведе "Global Variable"



function functionScope() {
    // Змінна в області видимості функції
    var localVar = "Local Variable";
    
    console.log(localVar); // Виведе "Local Variable"
}

functionScope();
// console.log(localVar); // Помилка: localVar is not defined, змінна не видно за межами функції


function blockScope() {
    if (true) {
        // Змінна в області видимості блоку
        let blockVar = "Block Variable";
        console.log(blockVar); // Виведе "Block Variable"
    }

    // console.log(blockVar); // Помилка: blockVar is not defined, змінна не видно за межами блоку
}

blockScope();
