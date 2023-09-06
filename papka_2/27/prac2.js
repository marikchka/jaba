function clock() {
    const intervalId = setInterval(() => {
        const currentDate = new Date();
        const hours = currentDate.getHours().toString().padStart(2, '0');
        const minutes = currentDate.getMinutes().toString().padStart(2, '0');
        const seconds = currentDate.getSeconds().toString().padStart(2, '0');
        
        console.log(`${hours}:${minutes}:${seconds}`);
    }, 1000);

    // Зупиняємо інтервал після 10 секунд (для прикладу)
    setTimeout(() => {
        clearInterval(intervalId);
        console.log("Clock stopped.");
    }, 10000);
}

clock();
