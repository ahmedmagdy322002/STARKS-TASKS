#include <stdio.h>

struct Employee {
    float salary;
    float bonus;
    float deductions;
};

int main() {
    struct Employee employees[3];
    float totalValue = 0.0;

    // Getting information for each employee
    for (int i = 0; i < 3; i++) {
        printf("Enter salary for employee %d: ", i+1);
        scanf("%f", &employees[i].salary);

        printf("Enter bonus for employee %d: ", i+1);
        scanf("%f", &employees[i].bonus);

        printf("Enter deductions for employee %d: ", i+1);
        scanf("%f", &employees[i].deductions);
    }

    // Calculating the total value
    for (int i = 0; i < 3; i++) {
        totalValue += employees[i].salary + employees[i].bonus - employees[i].deductions;
    }

    // Printing the total value
    printf("Total value supplied by finance team: %.2f\n", totalValue);

    return 0;
}
