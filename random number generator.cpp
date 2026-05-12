#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed random number generator

    int lower, upper;
    cout << "Enter lower and upper limits: ";
    cin >> lower >> upper;

    int randomNumber = lower + (rand() % (upper - lower + 1));
    cout << "Random number: " << randomNumber << endl;

    return 0;
}
