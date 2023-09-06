function generateId() {
    return "_" + Math.random().toString(36).substr(2, 9);
}

class TodoItem {
    constructor(name) {
        this.id = generateId();
        this.name = name;
        this._checked = false;
    }

    get checked() {
        return this._checked;
    }

    set checked(value) {
        if (typeof value === 'boolean') {
            this._checked = value;
        } else {
            throw new Error("Checked value must be a boolean.");
        }
    }
}

class TodoList {
    constructor(name) {
        this.id = generateId();
        this.name = name;
        this.items = [];
    }

    addItem(item) {
        if (item instanceof TodoItem) {
            this.items.push(item);
        } else {
            throw new Error("Only TodoItem instances can be added to the list.");
        }
    }

    removeItemById(id) {
        this.items = this.items.filter(item => item.id !== id);
    }

    getItemById(id) {
        return this.items.find(item => item.id === id);
    }
}

const todoList = new TodoList("My Todo List");

const item1 = new TodoItem("Buy groceries");
const item2 = new TodoItem("Clean the house");
const item3 = new TodoItem("Finish work project");
const item4 = new TodoItem("Exercise");

todoList.addItem(item1);
todoList.addItem(item2);
todoList.addItem(item3);
todoList.addItem(item4);

console.log(todoList);

item2.checked = true;

console.log(todoList);

todoList.removeItemById(item1.id);
todoList.removeItemById(item3.id);

console.log(todoList);
