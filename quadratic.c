#include <stdio.h>
#include <math.h>
int main ()
{
	float a, b, c;
	float D, r1, r2;

	printf ("Enter coefficients a, b and c: ");
	scanf ("%f %f %f", &a, &b, &c);

	if (a == 0)
	{
		printf ("It is not a quadratic equation.\n");
	}
	else
	{
		D = b * b - 4 * a * c;
		printf ("Discriminant = %.2f\n", D);

		if (D > 0)
		{
			r1 = (-b + sqrt (D)) / (2 * a);
			r2 = (-b - sqrt (D)) / (2 * a);
			printf ("Roots are real and distinct.\n");
			printf ("Root 1 = %.2f\n", r1);
			printf ("Root 2 = %.2f\n", r2);
		}
		else if (D == 0)
		{
			r1 = -b / (2 * a);
			printf ("Roots are real and equal.\n");
			printf ("Root 1 = Root 2 = %.2f\n", r1);
		}
		else
		{
			printf ("Roots are imaginary.\n");
		}
	}

	return 0;
}