const Person = {
    firstName: 'John',
    lastName: 'Doe',
    getFullName: function() {
        const fullName = this.firstName + ' ' + this.lastName;
        return fullName;
    }
};

const testArgs = ['sushi', 'hiking'];

let logPersonNameAndInterests = function() {
    const fullName = this.getFullName();
    const interests = Array.prototype.slice.call(arguments).join(', ');
    console.log(fullName + ' loves: ' + interests);
};

logPersonNameAndInterests.call(Person, ...testArgs); // Виведе "John Doe loves: sushi, hiking"
