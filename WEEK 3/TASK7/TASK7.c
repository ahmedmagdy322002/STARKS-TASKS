
#include "TASK7.h"

int qualityPoints(int average) {
    if (average >= 90 && average <= 100) {
        return 4;
    } else if (average >= 80 && average < 90) {
        return 3;
    } else if (average >= 70 && average < 80) {
        return 2;
    } else if (average >= 60 && average < 70) {
        return 1;
    } else {
        return 0;
    }
}
