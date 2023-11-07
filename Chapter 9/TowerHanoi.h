#pragma once
#include<iostream>
#include<stack>
#include<string>
#include<iomanip>
#include<chrono>
#include<thread>

using namespace std;

int inputInteger(string prompt, int startRange, int endRange);
char inputChar(string prompt, string options);

class TowerHanoi
{
private:
	stack<int> pegA;
	stack<int> pegB;
	stack<int> pegC;
	stack<int> result;
	int size;
	int moves = 1;
public:
	void setSize(int newSize);
	int getSize() const;
	void hanoiMenu();
	void updatePegs(int turns);
	void initializePegs();
	void displayPegs();
};