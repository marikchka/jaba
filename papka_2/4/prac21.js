const arr = ["CusTom", "Web", "aNd", "MoBile", "PlaTfoRms"];

function compose(...funcs) {
    return function(arg) {
        return funcs.reduceRight((acc, func) => func(acc), arg);
    };
}

function modifyArray(modifyCondition) {
    return function(data) {
        return data.map(modifyCondition).join(' - ') + ' length: ' + data.join('').length;
    };
}

function capitalizeFirst(str) {
    return str.charAt(0).toUpperCase() + str.slice(1).toLowerCase();
}

function allToLower(str) {
    return str.toLowerCase();
}

let capitalizeAllFirst = compose(modifyArray(capitalizeFirst));
let modifiedArr = capitalizeAllFirst(arr);
console.log(modifiedArr); // Виведе 'Result: Custom - Web - And - Mobile - Platforms length: 31'

let modifiedArrLower = compose(modifyArray(allToLower));
console.log(modifiedArrLower(arr)); // Виведе 'Result: custom - web - and - mobile - platforms length: 39'


