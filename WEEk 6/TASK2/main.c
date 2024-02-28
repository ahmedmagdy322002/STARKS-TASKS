#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time getTimeDifference(struct Time startTime, struct Time stopTime) {
    struct Time difference;
    int totalSecondsStart, totalSecondsStop, totalSecondsDiff;

    totalSecondsStart = startTime.hours * 3600 + startTime.minutes * 60 + startTime.seconds;
    totalSecondsStop = stopTime.hours * 3600 + stopTime.minutes * 60 + stopTime.seconds;
    totalSecondsDiff = totalSecondsStop - totalSecondsStart;

    difference.hours = totalSecondsDiff / 3600;
    totalSecondsDiff %= 3600;
    difference.minutes = totalSecondsDiff / 60;
    difference.seconds = totalSecondsDiff % 60;

    return difference;
}

int main() {
    struct Time startTime, stopTime, difference;

    // Getting start time from the user
    printf("Enter start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    // Getting stop time from the user
    printf("Enter stop time (hours minutes seconds): ");
    scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);

    // Calculating the difference
    difference = getTimeDifference(startTime, stopTime);

    // Printing the difference
    printf("Time difference: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}
