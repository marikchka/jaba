// Дано: функція яка приймає масив елементів будь-яких типів
// Результат: вивести у консоль масив який містить лише стрічки початкового масиву
// Приклад:
// [2, “string”, 3, , , ”test”] => [“string”, “test”]

function filterArray(initialArray) {
   const newArray = initialArray.filter(str => typeof str === 'string');
   
   console.log(newArray);
}

const Arr = [2, "string", 3, , , "test"];

filterArray(Arr);