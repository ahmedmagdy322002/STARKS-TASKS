#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int count = 1;
    int num = 1;

    while (count <= N) {
        printf("%d ", num++);
        printf("%d ", num++);
        printf("%d ", num++);
        printf("PUM\n");
        num++;
        count++;
    }

    return 0;
}
