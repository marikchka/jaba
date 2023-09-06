function isString(callback, value) {
    if (typeof value === 'string' && typeof callback === 'function') {
        callback(value);
    } else {
        console.error("Error: Invalid input.");
    }
}

function callbackFunction(value) {
    console.log("Received value:", value);
}

isString(callbackFunction, "Hello"); // Виведе "Received value: Hello"
isString(callbackFunction, 42); // Виведе "Error: Invalid input."
isString("not a function", "Test"); // Виведе "Error: Invalid input."
