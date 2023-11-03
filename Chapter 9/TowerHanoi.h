#pragma once
#include<iostream>
#include<stack>
#include<string>
#include<iomanip>

using namespace std;

int inputInteger(string prompt, int startRange, int endRange);

class TowerHanoi
{
private:
	stack<int> pegA;
	stack<int> pegB;
	stack<int> pegC;
	int size;
public:
	void setSize(int newSize);
	int getSize() const;
	void hanoiMenu();
	void updatePegs();
	void initializePegs();
	void displayPegs();
};