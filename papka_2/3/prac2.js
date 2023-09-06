const car = {
    name: "Tesla",
    model: "X",
};

function showCarInfo() {
    console.log(this.name, this.model);
}

const boundShowCarInfo = showCarInfo.bind(car);
boundShowCarInfo(); // Виведе "Tesla X"
