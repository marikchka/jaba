function printPowsOf2(number) {
    if (typeof number !== 'number') {
        console.log(number + ' - ' + 'incorrect type');
        return;
    }

    let currentPower = 0;
    let powerOf2 = 1;
    const result = [];

    for(let i = 1; powerOf2 <= number; i++){
        result.push(powerOf2);
        currentPower++;
        powerOf2 = Math.pow(2, currentPower);
        
    }
    console.log(number + ' - ' + result.join(', '));
}

printPowsOf2("302");
printPowsOf2(null);
printPowsOf2(128);
printPowsOf2(60);