#ifndef HEAPSORT_HPP
#define HEAPSORT_HPP

class HeapSort {
public:
    HeapSort();

    void sort(int arr[], int size);

private:
    void buildHeap(int arr[], int size);
    void heapify(int arr[], int size, int rootIndex);
    void swap(int& a, int& b);
};

#endif
