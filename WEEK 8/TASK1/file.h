
// file.h

#ifndef FILE_H
#define FILE_H

#define ADD(x, y) ((x) + (y))
#define SUBTRACT(x, y) ((x) - (y))
#define MULTIPLY(x, y) ((x) * (y))
#define DIVIDE(x, y) ((x) / (y))


#define ARRAY_SUM(arr, size) ({ \
    int sum_array = 0; \
    for (int i = 0; i < size; i++) { \
        sum_array += arr[i]; \
    } \
    sum_array; \
})

#endif // FILE_H



