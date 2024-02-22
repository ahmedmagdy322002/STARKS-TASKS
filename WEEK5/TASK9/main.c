#include <stdio.h>

int stringLength(const char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

const char* findSubstring(const char *str, const char *subStr) {
    int strLen = stringLength(str);
    int subStrLen = stringLength(subStr);

    if (subStrLen > strLen)
        return NULL;

    while (*str != '\0') {
        const char *ptr1 = str;
        const char *ptr2 = subStr;

        while (*ptr1 == *ptr2 && *ptr1 != '\0' && *ptr2 != '\0') {
            ptr1++;
            ptr2++;
        }

        if (*ptr2 == '\0')
            return str;

        str++;
    }

    return NULL;
}

int main() {
    char str[100];
    char subStr[100];

    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the substring to search: ");
    fgets(subStr, sizeof(subStr), stdin);

    // Remove newline characters from input strings
    int strLen = stringLength(str);
    if (str[strLen - 1] == '\n')
        str[strLen - 1] = '\0';

    int subStrLen = stringLength(subStr);
    if (subStr[subStrLen - 1] == '\n')
        subStr[subStrLen - 1] = '\0';

    const char *result = findSubstring(str, subStr);

    if (result != NULL) {
        printf("Substring found at index: %ld\n", result - str);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
