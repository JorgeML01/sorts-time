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

    int size = 0;
    string sortSelected;

    cout << "Array size: ";
    cin >> size;
    // size = 50000;
    cout << "\n--- SORT LIST ---\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Selection Sort\n";
    cout << "3. Insertion Sort\n";
    cout << "4. Heap Sort\n";
    cout << "5. Quick Sort\n";
    cout << "6. Merge Sort\n";
    cout << "Select sort: ";
    cin >> sortSelected;
    // sortSelected = "6";

    Functions* objFunctions = new Functions();

    ArrayTest* arrayObj = new ArrayTest(size);
    int* arr = arrayObj->getArray();

    // Objs. Sorts.
    BubbleSort* objBubble = new BubbleSort();
    HeapSort* objHeap = new HeapSort();
    MergeSort* objMerge = new MergeSort();
    QuickSort* objQuick = new QuickSort();
    SelectionSort* objSelection = new SelectionSort();
    InsertionSort* objInsertion = new InsertionSort();

    if (sortSelected == "1") {
        // Bubble sort
        auto startBubble = std::chrono::high_resolution_clock::now();
        objBubble->sort(arr, size);
        auto stopBubble = std::chrono::high_resolution_clock::now();
        auto durationBubble = std::chrono::duration_cast<std::chrono::microseconds>(stopBubble - startBubble);
        std::cout << "\n\nBubble Sort Time: " << durationBubble.count() / 1000000.0 << " seconds\n";
    } else if (sortSelected == "2"){
        // Selection sort
        auto startSelection = std::chrono::high_resolution_clock::now();
        objSelection->sort(arr, size);
        auto stopSelection = std::chrono::high_resolution_clock::now();
        auto durationSelection = std::chrono::duration_cast<std::chrono::microseconds>(stopSelection - startSelection);
        std::cout << "\n\nSelection Sort Time: " << durationSelection.count() / 1000000.0 << " seconds\n";
    } else if (sortSelected == "3") {
        // Insertion sort
        auto startInsertion = std::chrono::high_resolution_clock::now();
        objInsertion->sort(arr, size);
        auto stopInsertion = std::chrono::high_resolution_clock::now();
        auto durationInsertion = std::chrono::duration_cast<std::chrono::microseconds>(stopInsertion - startInsertion);
        std::cout << "\n\nInsertion Sort Time: " << durationInsertion.count() / 1000000.0 << " seconds\n";
    } else if (sortSelected == "4") {
        // Heap sort
        auto startHeap = std::chrono::high_resolution_clock::now();
        objHeap->sort(arr, size);
        auto stopHeap = std::chrono::high_resolution_clock::now();
        auto durationHeap = std::chrono::duration_cast<std::chrono::microseconds>(stopHeap - startHeap);
        std::cout << "\n\nHeap Sort Time: " << durationHeap.count() / 1000000.0 << " seconds\n\n";
    } else if (sortSelected == "5") {
        // Quick sort
        auto startQuick = std::chrono::high_resolution_clock::now();
        objBubble->sort(arr, size);
        auto stopQuick = std::chrono::high_resolution_clock::now();
        auto durationQuick = std::chrono::duration_cast<std::chrono::microseconds>(stopQuick - startQuick);
        std::cout << "\n\nQuick Sort Time: " << durationQuick.count() / 1000000.0 << " seconds\n";
    } else if (sortSelected == "6") {
        // Merge sort
        auto startMerge = std::chrono::high_resolution_clock::now();
        objMerge->sort(arr, size);
        auto stopMerge = std::chrono::high_resolution_clock::now();
        auto durationMerge = std::chrono::duration_cast<std::chrono::microseconds>(stopMerge - startMerge);
        std::cout << "\n\nMerge Sort Time: " << durationMerge.count() / 1000000.0 << " seconds\n";
    } else {
        cout << "Opción incorrecta\n";
    }


    delete arrayObj;
    delete objBubble;
    delete objSelection;
    delete objInsertion;
    delete objHeap;
    delete objMerge;
    delete objQuick;

    return 0;
}
