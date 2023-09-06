function removeObj(arrayOfObj, keyName, value) {
    return arrayOfObj.filter(obj => obj[keyName] !== value);
}

const arr = [{ age: 1 }, { age: 2 }, { age: 2 }, { year: 2 }];

const result1 = removeObj(arr, "age", 2);
console.log(result1);  

const result2 = removeObj(arr, "year", 2);
console.log(result2);