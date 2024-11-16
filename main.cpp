// Juwon Hong
//CIS 25
//15/9/2024

#include <iostream>
using namespace std;

int main() {
    int value1; 
    int value2; 
    int value3; 

    // Ask the user for the first value and second value
    cout << "Enter the first value: ";
    cin >> value1;

    cout << "Enter the second value: ";
    cin >> value2;

    // Determine the larger value using the conditional operator
    value3 = (value1 > value2) ? value1 : value2;

    // Output the larger value
    cout << "The larger value is: " << value3 << endl;

    return 0;
}
