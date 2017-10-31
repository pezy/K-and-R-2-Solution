#include <stdio.h>

/* print a histogram of the frequencies of different characters in its input. */

#define MAX_LENGTH	256
#define IN			1		/* inside a word */
#define OUT			0		/* outside a word */

main()
{
	int frequancies[MAX_LENGTH];
	int c, i, j, state, length, maxcount, maxlength;

	state = OUT;
	length = maxlength = -1;
	maxcount = 0;
	for (i = 0; i < MAX_LENGTH; ++i) lengths[i] = 0;

	/* collection */
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (state == IN) {
				if (length > maxlength) maxlength = length;
				++lengths[length];
				if (lengths[length] > maxcount) maxcount = lengths[length];
			}
			state = OUT;
			length = -1;
		}
		else {
			state = IN;
			++length;
		}
	}

	/* drawing */
	for (j = maxcount; j > 0; --j) {
		for (i = 0; i <= maxlength; ++i) {
			if (lengths[i] < j) putchar(' ');
			else putchar('#');
		}
		putchar('\n');
	}
}