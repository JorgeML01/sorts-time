#include "ArrayTest.hpp"
#include "BubbleSort.hpp"
#include "HeapSort.hpp"
#include "Functions.hpp"

#include <cstdlib>
#include <iostream>

using namespace std;


int main() {

    Functions* objFunctions = new Functions();

    ArrayTest* arrayObj = new ArrayTest();
    int* longArray = arrayObj->getLongArray();
    int* shortArray = arrayObj->getShortArray();

    // Objs. Sorts.
    BubbleSort* objBubble = new BubbleSort();
    HeapSort* objHeap = new HeapSort();


    //objBubble->sort(longArray, 100000);
    objHeap->sort(longArray, 100000);
    

    delete arrayObj;
    delete objBubble;
    delete objHeap;

    return 0;
}
