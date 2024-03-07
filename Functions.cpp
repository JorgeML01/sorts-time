#include "Functions.hpp"

#include <iostream>
using namespace std;

Functions::Functions() {

}

void Functions::printArray(int arr[], int size) {
    cout << "\n\n";
    for (int i = 0; i < size; i++) {
        cout << " " << arr[i];
    }
    cout << "\n\n";
}