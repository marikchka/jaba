function unicFn(initialArray) {
    const uniqueValues = [];
  
    for (const value of initialArray) {
      if (!uniqueValues.includes(value)) {
        uniqueValues.push(value);
      }
    }
  
    console.log(uniqueValues);
}
  
const inputArray = [2, 3, 1, 3, 3, 7];
unicFn(inputArray);