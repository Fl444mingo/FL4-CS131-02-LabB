#include <iostream>
using namespace std;
int main() {
    // Declare input for user input, initialize sum to give the sum a starting point
    int input, sum = 0;
    // Flavor text for program intro; could be on one line but is more legible in two
    cout << "This is the Wonderful Automatic Summation Program (aka WASP)\n"
        << "Enter integers to add to a final sum, enter a zero once satisfied\n\n";
    // Pseudocode: Prompt user for a number and add it to the sum ad infinitum until the user enters zero
    do {
        // Prompt
        cout << "Number: ";
        // Recieve
        cin >> input;
        // Add (could be written "sum = input + sum;"
        sum += input;
        // Repeat
    } while (input != 0);
    // Print the result of the do while loop
    cout << "WASP Calculation: " << sum << "\n\n";
    // Pause to keep the console clean
    system("pause");
    return 0;
}