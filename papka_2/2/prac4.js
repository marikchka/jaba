// Дано: Функція приймає Об’єкт типу {[name]: {age: number, city: string}}
// Результат: Вивести у консоль масив із іменами людей які із міста "London" та старше 18 років
// Приклад:
// {Max: {age: 23, city: “London”}, Mike: {age: 20: city: “NY”}} => [“Max”]

function findUser(initialObject) {
    const result = [];
  
    for (const name in initialObject) {
      const user = initialObject[name];
      if (user.age > 18 && user.city === "London") {
        result.push(name);
      }
    }
  
    console.log(result);
  }
  
  const users = {
    Max: { age: 23, city: "London" },
    Mike: { age: 20, city: "NY" },
    
  };
  
  findUser(users);