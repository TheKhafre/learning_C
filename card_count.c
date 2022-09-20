/**
 * Main - the card gives a return of the available card count
 * it tell when it is high and when the count is low.
 *
 * Return: the program returns 0 when success.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[4];
	/* the array is set to 4 to allow inputs uo to 999 */
	printf("Enter the card name: ");
	scanf("%3s", card_name);
	/* the scanf input storage is set to 3 to store 3 inputs */
	int val = 0;

	if (card_name[0] == 'K') {
		val = 10;
	} else if (card_name[0] == 'Q') {
		val = 10;
	} else if (card_name[0] == 'J') {
		val = 10;
	} else if (card_name[0] == 'A') {
		val = 11;
	} else {
		val = atoi (card_name);
		/* atoi simply mean it should print the integer
		 * as it is enter for card_name */
	}
	/* Now we need to check if the card value enter is 3 or 6 */
	if ((val > 2) && (val < 7)) {
		printf("The count has gone up\n");
	}
	/* But if the value is 10, K, Q, or J display other thing */
	else if (val == 10) {
		printf("The count has gone down\n");
	}
	/* we use 10 alone because checking up we saw that the others
	 * also have a value of 10 */
	getchar ();
	return 0;
}
