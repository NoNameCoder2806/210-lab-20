// Libraries
#include <iostream>
#include <iomanip>
using namespace std;

// Constants
const int SIZE = 3;

// Chair class
class Chair
{
private:
    int legs;              // The number of legs of the Chair object
    double* prices;        // The 3 most recent sale prices

public:
    // constructors
    Chair()             // Default constructor
    {
        legs = 0;                         // Assign the number of legs to 0
        prices = new double[SIZE];        // Declare an array with the size of 3

        for (int i = 0; i < SIZE; i++)    // Set all the 3 prices to 0
        {
            prices[i] = 0;
        }
    }

    Chair(int l)        // Partial constructor
    {
        legs = l;                         // Assign the number of legs to l
        prices = new double[SIZE];        // Declare an array with the size of 3

        for (int i = 0; i < SIZE; i++)    // Set all the 3 prices to 0
        {
            prices[i] = 0;
        }
    }

    // 

    // setters and getters
    void setLegs(int l)      { legs = l; }
    int getLegs()            { return legs; }

    void setPrices(double p1, double p2, double p3) { 
        prices[0] = p1; prices[1] = p2; prices[2] = p3; 
    }

    double getAveragePrices() {
        double sum = 0;
        for (int i = 0; i < SIZE; i++)
            sum += prices[i];
        return sum / SIZE;
    }

    void print() {
        cout << "CHAIR DATA - legs: " << legs << endl;
        cout << "Price history: " ;
        for (int i = 0; i < SIZE; i++)
            cout << prices[i] << " ";
        cout << endl << "Historical avg price: " << getAveragePrices();
        cout << endl << endl;
    }
};

int main() {
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
    for (int i = 0; i < SIZE; i++)
        collection[i].print();
    
    return 0;
}