function printSeasonByMonth(month) {
    
    if (month === "SEPTEMBER" || month === "NOVEMBER" || month ===  "OCTOBER") console.log("AUTUMN");
    else if (month === "DECEMBER" || month === "FEBRUARY" || month === "JANUARY") console.log("WINTER");
    else if (month === "MARCH" || month === "APRIL" || month === "MAY") console.log("SPRING");
    else if (month === "JUNE" || month === "JULY" || month === "AUGUST") console.log("SUMMER");
}

printSeasonByMonth("SEPTEMBER");
printSeasonByMonth("NOVEMBER");
printSeasonByMonth("JULY");
printSeasonByMonth("APRIL");