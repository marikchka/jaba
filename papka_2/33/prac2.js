async function getPlanets() {
    try {
      const response = await fetch('https://swapi.py4e.com/api/planets/');
      if (!response.ok) {
        throw new Error(`Failed with status code: ${response.status}`);
      }
      const data = await response.json();
      const planets = data.results.map(planet => {
        return {
          name: planet.name,
          rotation_period: planet.rotation_period,
          // додайте інші властивості планет за потребою
        };
      });
      console.log(planets);
    } catch (error) {
      console.log("Request Error: ", error);
    }
  }
  
  getPlanets();
  