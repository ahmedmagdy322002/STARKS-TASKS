#include <stdio.h>
#include <stdbool.h>

#include "function.h"
bool isPalindrome(int num) {
    char str[20];
    sprintf(str, "%d", num);

    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return false;
        }
    }

    return true;
}
