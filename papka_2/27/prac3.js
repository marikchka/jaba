function timer(seconds) {
    let remainingSeconds = seconds;

    const intervalId = setInterval(() => {
        if (remainingSeconds > 0) {
            console.log(`Timer: ${remainingSeconds}`);
            remainingSeconds--;
        } else {
            clearInterval(intervalId);
            console.log("Timer has ended.");
        }
    }, 1000);
}

timer(10); // Запустить таймер на 10 секунд
