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

    // Creating pointer to first Chair object
    Chair *chairPtr = new Chair();
    chairPtr->setLegs(4);
    chairPtr->setPrices(121.21, 232.32, 414.14);
    chairPtr->print();
    delete chairPtr;
    chairPtr = nullptr;

    // Creating 3 double arrays to store the prices
    double price[SIZE] = {525.25, 434.34, 252.52};

    // Creating dynamic Chair object with constructor
    Chair *livingChair = new Chair(3, price);
    livingChair->print();
    delete livingChair;
    livingChair = nullptr;

    // Creating an array of 3 Chair objects
    Chair collection[SIZE];

    // Display the data of all the Chair objects
    for (int i = 0; i < SIZE; i++)
    {
        collection[i].print();
    }

    return 0;
}