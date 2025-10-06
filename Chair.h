// COMSC-210 | Lab 20 | Dat Hoang Vien
// IDE used: Visual Studio Code

#pragma once

// Libraries
#include <iostream>
#include <iomanip>
using namespace std;

// Chair class
class Chair
{
private:
    // Class members
    int legs;              // The number of legs of the Chair object
    double* prices;        // The 3 most recent sale prices

    // Constants
    static const int SIZE = 3;               // Size of the prices array
    static const int MIN_PRICE = 10000;      // The minimum price
    static const int MAX_PRICE = 99999;      // The maximum price
    static const int MIN_LEGS = 3;           // The minimum number of leg

    // Private member functions
    double generateRandomPrice()
    {
        return (rand() % (MAX_PRICE - MIN_PRICE + 1) + MIN_PRICE) / (double) 100;
    }

    int generateRandomLegs()
    {
        return (rand() % 2 + MIN_LEGS);
    }

public:
    // constructors
    Chair()                               // Default constructor
    {
        legs = generateRandomLegs();      // Generate a random number of legs
        prices = new double[SIZE];        // Declare a double array with the size of 3

        for (int i = 0; i < SIZE; i++)    // Generate random prices
        {
            prices[i] = generateRandomPrice();
        }
    }

    Chair(int l, double p[SIZE])          // Parameter constructor
    {
        legs = l;                         // Assign the number of legs to l
        prices = new double[SIZE];        // Declare an array with the size of 3

        for (int i = 0; i < SIZE; i++)    // Copy the 3 prices
        {
            prices[i] = p[i];
        }
    }

    // Accessors / Getters
    int getLegs()
    {
        return legs;
    }

    // Mutators / Setters
    void setLegs(int l)
    {
        legs = l;
    }

    void setPrices(double p1, double p2, double p3)
    { 
        prices[0] = p1;
        prices[1] = p2;
        prices[2] = p3;
    }

    // Public member functions
    /*
        getAveragePrices()
        Returns the average price of the Chair object
        Arguments: none
        Return:
            - A double value representing the average price of the Chair object
    */
    double getAveragePrices()
    {
        // Declare a variable to hold the sum
        double sum = 0;

        // Add the prices to the sum
        for (int i = 0; i < SIZE; i++)
        {
            sum += prices[i];
        }

        // Return the average price
        return sum / SIZE;
    }

    /*
        print()
        Outputs the data of the Chair object to the console
        Arguments: none
        Return: none
    */
    void print()
    {
        // The Chair object's number of legs
        cout << "CHAIR DATA - legs: " << legs << endl;

        // The 3 most recent sale prices
        cout << "Price history: " ;
        for (int i = 0; i < SIZE; i++)
        {
            cout << prices[i] << " ";
        }

        // The average price
        cout << endl << "Historical avg price: " << getAveragePrices();

        // Enter 2 new lines
        cout << endl << endl;
    }
};
