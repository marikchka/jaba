//Список страв
const dishes = [
    "Піца",
    "Суші",
    "Паста",
    "Бургер",
    "Салат",
    "Ролл",
    "Суп",
    "Стейк",
    "Риба",
    "Курка",
    "Каррі",
    "Тако",
    "Борщ",
    "Кебаб",
    "Сирники",
    "Пельмені",
    "Морозиво",
    "Тірамісу",
    "Фрукти",
    "Шоколадний торт"
  ];
  
   //Функція для вибору випадкових страв
  function getRandomDishes(array, count) {
    const shuffled = array.sort(() => 0.5 - Math.random());
    return shuffled.slice(0, count);
  }
  
   //Вибираємо та виводимо 3 випадкові страви
  const selectedDishes = getRandomDishes(dishes, 3);
  console.log("Сьогодні на обід пропоную такі страви:");
  selectedDishes.forEach((dish, index) => {
    console.log(${index + 1}. ${dish});
  });