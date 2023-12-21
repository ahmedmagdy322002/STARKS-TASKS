#include <stdio.h>

int main() {

    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);


    int result = 0;
    for (int i = 1; i <= N; ++i) {

        int num = i;
        int currentSum = 0;
        while (num > 0) {
            currentSum += num % 10;
            num /= 10;
        }


        if (A <= currentSum && currentSum <= B) {
            result += i;
        }
    }


    printf("%d\n", result);

    return 0;
}
