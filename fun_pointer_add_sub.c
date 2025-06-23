#include <stdio.h>

// Define function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int a, b, choice;
    
    // Define a function pointer for operations
    void *operation;
    
    // Prompt user for input
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Choose operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Use function pointer to call appropriate operation
    switch (choice) {
        case 1:
            {
                int (*op)(int, int) = add;
                printf("Result: %d\n", op(a, b));
                break;
            }
        case 2:
            {
                int (*op)(int, int) = subtract;
                printf("Result: %d\n", op(a, b));
                break;
            }
        case 3:
            {
                int (*op)(int, int) = multiply;
                printf("Result: %d\n", op(a, b));
                break;
            }
        case 4:
            {
                float (*op)(int, int) = divide;
                if (b == 0)
                    printf("Error: Division by zero is not allowed.\n");
                else
                    printf("Result: %.2f\n", op(a, b));
                break;
            }
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}
