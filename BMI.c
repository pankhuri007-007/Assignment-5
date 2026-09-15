#include <stdio.h>

int main(void)
{
	float w, h, bmi;

	printf("Enter weight in kilograms: ");
	scanf("%f", &w);

	printf("Enter height in metres: ");
	scanf("%f", &h);

	if (w <= 0)
	{
		printf("Invalid weight.\n");
	}
	else if (h <= 0)
	{
		printf("Invalid height.\n");
	}
	else
	{
		bmi = w / (h * h);

		printf("BMI = %.2f\n", bmi);

		if (bmi < 18.5)
		{
			printf("Category: Underweight\n");
		}
		else if (bmi < 25)
		{
			printf("Category: Normal\n");
		}
		else if (bmi < 30)
		{
			printf("Category: Overweight\n");
		}
		else if (bmi < 35)
		{
			printf("Category: Obesity Class I\n");
		}
		else if (bmi < 40)
		{
			printf("Category: Obesity Class II\n");
		}
		else
		{
			printf("Category: Obesity Class III\n");
		}
	}

	return 0;
}
