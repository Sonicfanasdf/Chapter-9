#pragma once
#include <iostream>
using namespace std;

class Pattern
{
private:
	int left; // spaces
	int length; // length of pattern

public:
	Pattern(); // Initializer Constructor
	Pattern(int newLeft, int newLength); // Argument Constructor
	void pattern(int left, int length); // creates pattern using recursion
};

