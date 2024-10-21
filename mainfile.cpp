#include <iostream>
#include <string>
using namespace std;

// this functions makes an array that stores 3 string inputs
// and prints it
int main() {

    const int arrSize = 3;
    string nameList[arrSize];
    string storeNames;

    for (int n = 0; n < arrSize; n++) {
        cout << "Enter any name: ";
        getline(cin, storeNames);
        nameList[n] = storeNames;

    }

    cout << "The names you gave were: " << endl;

    for (int i = 0; i < arrSize; i++) {
        cout << nameList[i]; 
            if (i + 1 < arrSize) {
                cout << ", ";
            }
            else {
                cout << "." << endl;
            }
    }
    
    return 0;

}
