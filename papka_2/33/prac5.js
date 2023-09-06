// huynya
async function getPersonFilms(name) {
    try {
      const people = await fetchSWAPI(`people/?search=${name}`);
      if (people.results.length === 0) {
        throw new Error(`Person with name '${name}' not found`);
      }
      const person = people.results[0];
  
      const filmPromises = person.films.map(async (filmUrl) => {
        const film = await fetchSWAPI(filmUrl);
        return {
          title: film.title,
          episode_id: film.episode_id,
          // ... other film details you want
        };
      });
  
      const films = await Promise.all(filmPromises);
  
      return { name: person.name, films };
    } catch (error) {
      console.log(`getPersonFilms error: ${error}`);
      throw error;
    }
  }
  
  async function testGetPersonFilms() {
    try {
      const lukeFilms = await getPersonFilms("Luke");
      console.log("lukeFilms ", lukeFilms);
  
      const kenobiFilms = await getPersonFilms("Kenobi");
      console.log("kenobiFilms ", kenobiFilms);
    } catch (error) {
      console.log("testGetPersonFilms error ", error);
    }
  }
  
  testGetPersonFilms();
  