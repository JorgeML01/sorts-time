#include "ArrayTest.hpp"

#include <iostream>
using namespace std;

ArrayTest::ArrayTest(int size) {
    this->size = size;
    this->arr = new int[size];
    srand(time(NULL));
    this->generateArray();
}

ArrayTest::~ArrayTest() {

}

// Implementación de la función getArray.
int* ArrayTest::getArray() {
    return this->arr;
}

void ArrayTest::generateArray() {
    for (int i = 0; i < this->size; i++) {
	    int random = rand() % 9999999;        
        this->arr[i] = random;
    }
}

