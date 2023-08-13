#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));
    
    // Generate a random number between 1 and 100.
    int targetNumber = rand() % 100 + 1;
    int guessNumber;
    
    while (true) {
        cout << "Guess the number between 1 and 100: "<<endl;
        cin >> guessNumber;
        
        if (cin.fail()) {
            cout << "Invalid input. Please enter a valid number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        
        if (guessNumber == targetNumber) {
            cout << "Congratulations! You guessed the correct number: " << targetNumber << endl;
            break;
        } else if (guessNumber < targetNumber) {
            cout << "Too low! Try a higher number." << endl;
        } else {
            cout << "Too high! Try a lower number." << endl;
        }
    }
    
    return 0;
}
