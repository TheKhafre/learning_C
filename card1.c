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
	getchar ();
	return 0;
}
