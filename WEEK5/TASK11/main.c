#include <stdio.h>

// Function to calculate the cube based on the type
void calculateCube(void *value, int type, void *result) {
    switch(type) {
        case 1: // char
            *(char*)result = (*(char*)value) * (*(char*)value) * (*(char*)value);
            break;
        case 2: // int
            *(int*)result = (*(int*)value) * (*(int*)value) * (*(int*)value);
            break;
        case 3: // long int
            *(long int*)result = (*(long int*)value) * (*(long int*)value) * (*(long int*)value);
            break;
        case 4: // float
            *(float*)result = (*(float*)value) * (*(float*)value) * (*(float*)value);
            break;
        case 5: // double
            *(double*)result = (*(double*)value) * (*(double*)value) * (*(double*)value);
            break;
        default:
            printf("Invalid type\n");
    }
}

int main() {
    int type;
    printf("Enter the type of the value (1=char, 2=int, 3=long int, 4=float, 5=double): ");
    scanf("%d", &type);

    // Assuming the user will always provide a valid type
    switch(type) {
        case 1: {
            char value, result;
            printf("Enter a char value: ");
            scanf(" %c", &value);
            calculateCube(&value, type, &result);
            printf("Cube: %c\n", result);
            break;
        }
        case 2: {
            int value, result;
            printf("Enter an int value: ");
            scanf("%d", &value);
            calculateCube(&value, type, &result);
            printf("Cube: %d\n", result);
            break;
        }
        case 3: {
            long int value, result;
            printf("Enter a long int value: ");
            scanf("%ld", &value);
            calculateCube(&value, type, &result);
            printf("Cube: %ld\n", result);
            break;
        }
        case 4: {
            float value, result;
            printf("Enter a float value: ");
            scanf("%f", &value);
            calculateCube(&value, type, &result);
            printf("Cube: %f\n", result);
            break;
        }
        case 5: {
            double value, result;
            printf("Enter a double value: ");
            scanf("%lf", &value);
            calculateCube(&value, type, &result);
            printf("Cube: %lf\n", result);
            break;
        }
        default:
            printf("Invalid type\n");
    }

    return 0;
}

