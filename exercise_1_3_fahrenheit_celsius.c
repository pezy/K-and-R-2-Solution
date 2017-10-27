#include <stdio.h>

/* print Fahrenheit-Celsius table 
	for fahr = 0, 20, ..., 300; floating-point version
	added a heading above the table */

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;		/* lower limit of templature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	printf("Fahrenheit-Celsius Table\n");

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}
}