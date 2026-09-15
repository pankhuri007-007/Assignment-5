#include <stdio.h>

int main(void)
{
	int choice;
	float balance = 5000.0f;
	float amount, rate, interest;

menu:
	printf("\n--- Bank Transaction Menu ---\n");
	printf("1. Check Balance\n");
	printf("2. Deposit Money\n");
	printf("3. Withdraw Money\n");
	printf("4. Calculate Annual Interest\n");
	printf("5. Exit\n");
	printf("Enter your choice: ");

	if (scanf("%d", &choice) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

	switch (choice) {
	case 1:
		printf("Current balance = Rs. %.2f\n", balance);
		break;
	case 2:
		printf("Enter deposit amount: Rs. ");
		scanf("%f", &amount);
		if (amount <= 0) {
			printf("Invalid deposit amount.\n");
		} else {
			balance += amount;
			printf("Deposit successful.\nNew balance = Rs. %.2f\n", balance);
		}
		break;
	case 3:
		printf("Enter withdrawal amount: Rs. ");
		scanf("%f", &amount);
		if (amount <= 0) {
			printf("Invalid withdrawal amount.\n");
		} else if (amount > balance) {
			printf("Insufficient balance.\n");
		} else {
			balance -= amount;
			printf("Withdrawal successful.\nRemaining balance = Rs. %.2f\n", balance);
		}
		break;
	case 4:
		printf("Enter annual interest rate: ");
		scanf("%f", &rate);
		if (rate < 0) {
			printf("Invalid interest rate.\n");
		} else {
			interest = balance * rate / 100.0f;
			printf("Annual interest = Rs. %.2f\n", interest);
		}
		break;
	case 5:
		printf("Thank you for using our bank.\n");
		return 0;
	default:
		printf("Invalid choice. Try again.\n");
	}

	goto menu;
}