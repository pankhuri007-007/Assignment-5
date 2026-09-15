#include <stdio.h>
#include <math.h>

int main(void)
{
	int choice, n1, n2;

	do {
		printf("\n--- Calculator Menu ---\n");
		printf("1. Addition\n2. Subtraction\n3. Multiplication\n");
		printf("4. Division\n5. Modulus\n6. Power\n7. Exit\n");
		printf("Enter your choice: ");

		if (scanf("%d", &choice) != 1)
			return 1;

		if (choice >= 1 && choice <= 6) {
			printf("Enter two numbers: ");
			if (scanf("%d %d", &n1, &n2) != 2)
				return 1;
		}

		switch (choice) {
		case 1:
			printf("Sum = %d\n", n1 + n2);
			break;
		case 2:
			printf("Difference = %d\n", n1 - n2);
			break;
		case 3:
			printf("Product = %d\n", n1 * n2);
			break;
		case 4:
			if (n2 == 0)
				printf("Division by zero is not allowed.\n");
			else
				printf("Quotient = %.2f\n", (float)n1 / n2);
			break;
		case 5:
			if (n2 == 0)
				printf("Modulus by zero is not allowed.\n");
			else
				printf("Remainder = %d\n", n1 % n2);
			break;
		case 6:
			printf("Power = %.2f\n", pow(n1, n2));
			break;
		case 7:
			printf("Calculator closed.\n");
			break;
		default:
			printf("Invalid choice. Try again.\n");
		}
	} while (choice != 7);

	return 0;
}