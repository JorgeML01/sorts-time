#include "ArrayTest.hpp"
#include "BubbleSort.hpp"
#include "HeapSort.hpp"
#include "MergeSort.hpp"
#include "QuickSort.hpp"
#include "SelectionSort.hpp"
#include "InsertionSort.hpp"
#include "Functions.hpp"

#include <cstdlib>
#include <iostream>

using namespace std;


int main() {

    int longArraySize = 200000;
    int shortArraySize = 10;
    Functions* objFunctions = new Functions();

    ArrayTest* arrayObj = new ArrayTest(longArraySize, shortArraySize);
    int* longArray = arrayObj->getLongArray();
    int* shortArray = arrayObj->getShortArray();

    // Objs. Sorts.
    BubbleSort* objBubble = new BubbleSort();
    HeapSort* objHeap = new HeapSort();
    MergeSort* objMerge = new MergeSort();
    QuickSort* objQuick = new QuickSort();
    SelectionSort* objSelection = new SelectionSort();
    InsertionSort* objInsertion = new InsertionSort();

    //objBubble->sort(longArray, longArraySize);       // O(n^2)
    //objSelection->sort(longArray, longArraySize);    // O(n^2)
    //objInsertion->sort(longArray, longArraySize);    // O(n^2)
    //objHeap->sort(longArray, longArraySize);         // O(nlogn)
    //objMerge->sort(longArray, longArraySize);        // O(nlogn)
    objQuick->sort(longArray, longArraySize);        // O(nlogn)


    delete arrayObj;
    delete objBubble;
    delete objSelection;
    delete objInsertion;
    delete objHeap;
    delete objMerge;
    delete objQuick;

    return 0;
}
