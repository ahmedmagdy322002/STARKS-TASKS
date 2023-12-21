#include <stdio.h>

int main() {

    int V, A, B, C;
    scanf("%d %d %d %d", &V, &A, &B, &C);

    int daysFather = V / A;
    int daysMother = V / B;
    int daysTakahashi = V / C;

    if (daysFather <= daysMother && daysFather <= daysTakahashi) {
        printf("F\n");
    } else if (daysMother <= daysFather && daysMother <= daysTakahashi) {
        printf("M\n");
    } else {
        printf("T\n");
    }

    return 0;
}

