#include "ArrayTest.hpp"
#include "BubbleSort.hpp"
#include "HeapSort.hpp"
#include "MergeSort.hpp"
#include "QuickSort.hpp"
#include "SelectionSort.hpp"
#include "InsertionSort.hpp"
#include "Functions.hpp"

#include <cstdlib>
#include <chrono>
#include <iostream>

using namespace std;


int main() {

    int longArraySize = 100000; // Tengo que ir a corregir algo allá en ArrayTest porque con menos me da segmentation fault.
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
    //objQuick->sort(longArray, longArraySize);        // O(n^2)
    //objMerge->sort(longArray, longArraySize);        // O(nlogn)
    //objHeap->sort(longArray, longArraySize);         // O(nlogn)
    //objInsertion->sort(longArray, longArraySize);    // O(nlogn)


    // Bubble sort
    auto startBubble = std::chrono::high_resolution_clock::now();
    objBubble->sort(longArray, longArraySize);
    auto stopBubble = std::chrono::high_resolution_clock::now();
    auto durationBubble = std::chrono::duration_cast<std::chrono::microseconds>(stopBubble - startBubble);

    // Selection sort
    auto startSelection = std::chrono::high_resolution_clock::now();
    objSelection->sort(longArray, longArraySize);
    auto stopSelection = std::chrono::high_resolution_clock::now();
    auto durationSelection = std::chrono::duration_cast<std::chrono::microseconds>(stopSelection - startSelection);

    // Insertion sort
    auto startInsertion = std::chrono::high_resolution_clock::now();
    objInsertion->sort(longArray, longArraySize);
    auto stopInsertion = std::chrono::high_resolution_clock::now();
    auto durationInsertion = std::chrono::duration_cast<std::chrono::microseconds>(stopInsertion - startInsertion);

    // Heap sort --> ME QUEDÉ AQUÍ.
    auto startHeap = std::chrono::high_resolution_clock::now();
    objHeap->sort(longArray, longArraySize);
    auto stopHeap = std::chrono::high_resolution_clock::now();
    auto durationHeap = std::chrono::duration_cast<std::chrono::microseconds>(stopHeap - startHeap);

    // Merge sort
    auto startMerge = std::chrono::high_resolution_clock::now();
    objMerge->sort(longArray, longArraySize);
    auto stopMerge = std::chrono::high_resolution_clock::now();
    auto durationMerge = std::chrono::duration_cast<std::chrono::microseconds>(stopMerge - startMerge);

    // Quick sort
    auto startQuick = std::chrono::high_resolution_clock::now();
    objBubble->sort(longArray, longArraySize);
    auto stopQuick = std::chrono::high_resolution_clock::now();
    auto durationQuick = std::chrono::duration_cast<std::chrono::microseconds>(stopQuick - startQuick);


    std::cout << "\n\nBubble Sort Time: " << durationBubble.count() / 1000000.0 << " seconds\n";
    std::cout << "Quick Sort Time: " << durationQuick.count() / 1000000.0 << " seconds\n";
    std::cout << "Selection Sort Time: " << durationSelection.count() / 1000000.0 << " seconds\n";
    std::cout << "Merge Sort Time: " << durationMerge.count() / 1000000.0 << " seconds\n";
    std::cout << "Insertion Sort Time: " << durationInsertion.count() / 1000000.0 << " seconds\n";
    std::cout << "Heap Sort Time: " << durationHeap.count() / 1000000.0 << " seconds\n\n";


    delete arrayObj;
    delete objBubble;
    delete objSelection;
    delete objInsertion;
    delete objHeap;
    delete objMerge;
    delete objQuick;

    return 0;
}
