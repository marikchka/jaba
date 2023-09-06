async function getSkywalkers() {
    try {
      const response = await fetch('https://swapi.py4e.com/api/people/?search=Skywalker');
      if (!response.ok) {
        throw new Error(`Failed with status code: ${response.status}`);
    }
    const data = await response.json();
    const skywalkers = data.results.map(person => {
    return {
        name: person.name,
        height: person.height,
          // додайте інші властивості персонажів за потребою
    };
    });
    console.log(skywalkers);
    } catch (error) {
       console.log("Request Error: ", error);
      }
}
  
getSkywalkers();
  