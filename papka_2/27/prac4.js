class AutoNullify {
    constructor(name) {
        this.originalName = name;
        this.name = name;
        this.nullifyTimeout = setTimeout(() => {
            this.name = null;
        }, 5000);
    }

    cancelNullify() {
        clearTimeout(this.nullifyTimeout);
        this.name = this.originalName; // Reset name to original value
    }
}

const obj = new AutoNullify("John");
console.log(obj.name); // Виведе "John"

// Зачекайте 5 секунд
setTimeout(() => {
    console.log(obj.name); // Виведе "null"
}, 5000);

// Скасувати занулення
obj.cancelNullify();// ця хуйня не працює!!!!!

// Перевірити через 5 секунд, name буде "John" знову
setTimeout(() => {
    console.log(obj.name); // Виведе "John"
}, 10000); // Чекаємо 10 секунд, оскільки перший таймер був на 5 секунд

