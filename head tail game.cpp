#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

using namespace std;

int main() {
    int choice;
    
    // Seed random number generator
    srand(time(0));

    cout << "=== Head & Tail Game ===" << endl;
    cout << "Enter your choice (1 for Head, 2 for Tail): ";
    cin >> choice;

    // Generate random result (1 or 2)
    int result = rand() % 2 + 1;

    cout << "Result: ";
    if (result == 1)
        cout << "Head" << endl;
    else
        cout << "Tail" << endl;

    // Check win or lose
    if (choice == result)
        cout << "You Win!" << endl;
    else
        cout << "You Lose!" << endl;

    return 0;
}