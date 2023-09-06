let convert = function(bytes) {
    const mb = bytes / (1024 * 1024);
    return mb.toFixed(2) + " Mb";
};

const bytes = 10000;
const convertedValue = convert.call(null, bytes);
console.log(convertedValue); // Виведе "0.01 Mb"
