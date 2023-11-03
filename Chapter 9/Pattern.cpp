#include "Pattern.h"

Pattern::Pattern()
{
	left = 0; // spaces
	length = 0; // length of pattern
}

Pattern::Pattern(int newLeft, int newLength)
{
	left = newLeft;
	length = newLength;

}

//Pre-condition - Parameters: int left(spaces) & int length(length of pattern)
//Post-condtion - Returns only when varibale length == 0
void Pattern::pattern(int left, int length)
{
	if (length == 0)  // length starts at 8
		return;

	pattern(left, length / 2); // Recursive call with halved length.
	// Left start at 15

	cout << '\t'; // Output a tab

	for (int i = 0; i < left; i++) // Loop to print spaces before the stars
		cout << "  ";

	for (int i = 0; i < length; i++) // Loop to print the stars
		cout << "* ";

	cout << '\n'; // Output a new line

	pattern(left + length / 2, length / 2); // Recursive call with adjusted parameters
	// left starts at 15
}
