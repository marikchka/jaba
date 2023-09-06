function Calculator() {}

Calculator.prototype.sum = function(a, b) {
    return a + b;
};

Calculator.prototype.subtract = function(a, b) {
    return a - b;
};


function AdvancedCalculator() {}

AdvancedCalculator.prototype = Object.create(Calculator.prototype);

AdvancedCalculator.prototype.multiply = function(a, b) {
    return a * b;
};

AdvancedCalculator.prototype.divide = function(a, b) {
    if (b !== 0) {
        return a / b;
    } else {
        throw new Error("Division by zero is not allowed.");
    }
};


const calculator = new Calculator();
console.log(calculator.sum(5, 3)); 
console.log(calculator.subtract(10, 4)); 

const advancedCalculator = new AdvancedCalculator();
console.log(advancedCalculator.sum(5, 3)); 
console.log(advancedCalculator.subtract(10, 4));
console.log(advancedCalculator.multiply(3, 4));
console.log(advancedCalculator.divide(10, 2)); 
