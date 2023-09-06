function isEvenArray(initialArray) {
    const Array = [];

    let isEven = true

    for (const value of initialArray){
        if (value % 2 !== 0){
            isEven = false;
            break;
        }
        
    }

    if (isEven) console.log(initialArray, " => ", "YES");
    else console.log(initialArray, " => ", "NO");

}

const Arr1 = [1, 2, 3, 9];
const Arr2 = [2, 4, 6];

isEvenArray(Arr1);
isEvenArray(Arr2);