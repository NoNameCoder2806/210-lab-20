// COMSC-210 | Lab 20 | Dat Hoang Vien
// IDE used: Visual Studio Code

// Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include "Chair.h"
using namespace std;

// Constants
const int SIZE = 3;

// Main function
int main()
{
    // Generate a seed using srand() and time()
    srand(time(0));

    cout << fixed << setprecision(2);

    //creating pointer to first chair object
    Chair *chairPtr = new Chair;
    chairPtr->setLegs(4);
    chairPtr->setPrices(121.21, 232.32, 414.14);
    chairPtr->print();

    //creating dynamic chair object with constructor
    Chair *livingChair = new Chair(3);
    livingChair->setPrices(525.25, 434.34, 252.52);
    livingChair->print();
    delete livingChair;
    livingChair = nullptr;

    //creating dynamic array of chair objects
    Chair *collection = new Chair[SIZE];
    collection[0].setLegs(4);
    collection[0].setPrices(441.41, 552.52, 663.63);
    collection[1].setLegs(4);
    collection[1].setPrices(484.84, 959.59, 868.68);
    collection[2].setLegs(4);
    collection[2].setPrices(626.26, 515.15, 757.57);

    // Display all the Chair objects
    for (int i = 0; i < SIZE; i++)
        collection[i].print();
    
    return 0;
}