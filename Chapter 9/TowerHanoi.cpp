#include "TowerHanoi.h"

void TowerHanoi::setSize(int newSize)
{
	size = newSize;
}
int TowerHanoi::getSize() const
{
	return size;
}
void TowerHanoi::hanoiMenu()
{
	cout << "Tower of Hanoi (Recursive) by Joe Bryant\n";
	cout << string(100, char(196)) << endl << endl;
	
	setSize(inputInteger("\tEnter the number of rings (1..64): ", 1, 64));

	initializePegs();

	//updatePegs();

	displayPegs();
	
}
void TowerHanoi::updatePegs()
{
	if (pegA.size() == size)
	{
		pegC.push(pegA.top());
		pegA.pop();
	}
	else if (pegA.top() > pegC.top())
	{
		pegB.push(pegA.top());
		pegA.pop();
	}
}
void TowerHanoi::initializePegs()
{
	while (!pegA.empty())
	{
		pegA.pop();
	}
	for (int i = size; i > 0; i--)
	{
		pegA.push(i);
	}

	while (!pegB.empty())
	{
		pegB.pop();
	}
	while (!pegC.empty())
	{
		pegC.pop();
	}
}
void TowerHanoi::displayPegs()
{
	stack<int> tempA(pegA);
	stack<int> tempB(pegB);
	stack<int> tempC(pegC);

	cout << string(13, char(255)) << char(186) << string(15, char(255)) << char(186) << string(15, char(255)) << char(186) << endl;

	/*if (size <= 9)
	{
		for (int index = 0; index < size; index++)
		{
			

			if (tempA.size() == (size - index))
			{
				cout << string(13 - tempA.top(), char(255));
				cout << string(tempA.top(), char(254)) << tempA.top() << string(tempA.top(), char(254));
				tempA.pop();
			}
			else
			{
				cout << string(14, char(255));
				cout << char(186);
			}

			cout << setw(16);

			if (tempB.size() == (size - index))
			{
				cout << tempB.top();
				tempB.pop();
			}
			else
			{
				cout << string()
				cout << char(186);
			}

			cout << setw(16);

			if (tempC.size() == (size - index))
			{
				cout << tempC.top();
				tempC.pop();
			}
			else
			{
				cout << char(186);
			}

			cout << endl;
		}
	}
	else
	{
		for (int index = 0; index < size; index++)
		{
			cout << setw(14);

			if (tempA.size() == (size - index))
			{
				cout << tempA.top();
				tempA.pop();
			}
			else
			{
				cout << char(186);
			}

			cout << setw(16);

			if (tempB.size() == (size - index))
			{
				cout << tempB.top();
				tempB.pop();
			}
			else
			{
				cout << char(186);
			}

			cout << setw(16);

			if (tempC.size() == (size - index))
			{
				cout << tempC.top();
				tempC.pop();
			}
			else
			{
				cout << char(186);
			}

			cout << endl;
		}
	}*/

	for (int index = 0; index < size; index++)
	{
		cout << setw(14);

		if (tempA.size() == (size - index))
		{
			cout << tempA.top();
			tempA.pop();
		}
		else
		{
			cout << char(186);
		}

		cout << setw(16);

		if (tempB.size() == (size - index))
		{
			cout << tempB.top();
			tempB.pop();
		}
		else
		{
			cout << char(186);
		}

		cout << setw(16);

		if (tempC.size() == (size - index))
		{
			cout << tempC.top();
			tempC.pop();
		}
		else
		{
			cout << char(186);
		}

		cout << endl;
	}

	cout << string(8, char(255)) << string(5, char(205)) << char(202) << string(5, char(205)) << string(5, char(255)) << string(5, char(205)) << char(202) << string(5, char(205)) << string(5, char(255)) << string(5, char(205)) << char(202) << string(5, char(205)) << endl;
	cout << string(13, char(255)) << "A" << string(15, char(255)) << "B" << string(15, char(255)) << "C\n\n";
}