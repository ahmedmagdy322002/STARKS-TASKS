
#include "TASK2.h"


unsigned long long int fibonacci(unsigned int n) {
    unsigned long long int a = 0, b = 1, temp;

    if (n == 0)
        return a;
    else if (n == 1)
        return b;

    for (unsigned int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}
