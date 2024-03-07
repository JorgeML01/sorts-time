#include "ArrayTest.hpp"

#include <iostream>
using namespace std;

ArrayTest::ArrayTest(int longSize, int shortSize) {

    this->longSize = longSize;
    this->shortSize = shortSize;
    this->longArray = new int[longSize];
    this->shortArray = new int[shortSize];

    srand(time(NULL));
    this->generateLongArray();
    this->generateShortArray();

    cout << "\n\n";
    for (int i = 0; i < 10; i++) {
        cout << " " << this->shortArray[i];
    }

    cout << "\n\nsize: " << sizeof(this->shortArray) / sizeof(this->shortArray[0]);
    cout << "\n\n";
}

ArrayTest::~ArrayTest() {

}

// Implementación de la función getArray.
int* ArrayTest::getLongArray() {
    return longArray;
}

int* ArrayTest::getShortArray() {
    return shortArray;
}

void ArrayTest::generateLongArray() {

    for (int i = 0; i < 100000; i++) {
	    int random = rand() % 9999999;        
        this->longArray[i] = random;
    }

}

void ArrayTest::generateShortArray() {
    for (int i = 0; i < 10; i++) {
        int random = rand() % 9999999;      
        this->shortArray[i] = random;
    }
}