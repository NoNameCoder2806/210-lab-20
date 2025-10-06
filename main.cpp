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

    // Set the precision for floating point numbers
    cout << fixed << setprecision(2);

    // Creating pointer to first chair object
    Chair *chairPtr = new Chair;
    chairPtr->setLegs(4);
    chairPtr->setPrices(121.21, 232.32, 414.14);
    chairPtr->print();

    // Creating dynamic chair object with constructor
    Chair *livingChair = new Chair(3);
    livingChair->setPrices(525.25, 434.34, 252.52);
    livingChair->print();
    delete livingChair;
    livingChair = nullptr;

    // Creating 3 double arrays to store the prices
    double price1[SIZE] = {441.41, 552.52, 663.63};
    double price2[SIZE] = {484.84, 959.59, 868.68};
    double price3[SIZE] = {626.26, 515.15, 757.57};

    // Creating an array of 3 Chair objects
    Chair collection[SIZE] = { Chair(4, price1), Chair(4, price2), Chair(4, price3) };

    // Display the data of all the Chair objects
    for (int i = 0; i < SIZE; i++)
    {
        collection[i].print();
    }

    return 0;
}