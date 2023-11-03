/*
 Erik Santana
 11/1/23
 CPMR 131 - Professor Q

 Credit: Thanh Tran, John Kim, Erik Santana, Joe Bryant, Otoniel Torres Bernal, Christian Hernandez, Saul Merino & Bryan Alarcon
 */

#include <iostream>
#include "input.h"
#include "Pattern.h"
#include "TowerHanoi.h"
using namespace std;

void mainMenu();

int main()
{
    mainMenu();
    return 0;
}

// Pre-Condition: NA
// Post-Condition: no return. Main menu
void mainMenu()
{
    Pattern patternObject1;
    TowerHanoi tower;

    cout << endl;
    cout << "\tCMPR131 - Chapter 9: Recursive Applications by Erik Santana (11 / 1 / 23)";
    cout << "\n\t" << string(80, char(205)) << endl;
    cout << "\t1> Pattern of astricks and blanks" << endl;
    cout << "\t2> Guess a number" << endl;
    cout << "\t3> Solve Tower of Hanoi" << endl;
    cout << "\t4> Solve n-Queens" << endl;
    cout << "\n\t" << string(80, char(169));
    cout << "\n\t0 > exit" << endl;
    cout << "\n\t" << string(80, char(205)) << endl;

    // get user input/option of main menu
    int option = inputInteger("\n\tOption: ", 0, 4);

    // loop through main menu until user exits
    do
    {
        switch (option)
        {
        case 0: exit(1); break;
        case 1: system("cls"); patternObject1.pattern(0, 8); system("pause"); system("cls"); mainMenu(); break;
        case 2: system("cls"); ; break;
        case 3: system("cls"); tower.hanoiMenu(); system("pause"); system("cls"); mainMenu(); break;
        case 4: system("cls"); ; break;
        }

        // new line
        cout << "\n"; 
    } while (true);
}


