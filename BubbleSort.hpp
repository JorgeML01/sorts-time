// BubbleSort.hpp
#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP

class BubbleSort {
public:
    BubbleSort();

    // Función para realizar el Bubble Sort
    void sort(int arr[], int size);

private:
    // Función auxiliar para intercambiar elementos
    void swap(int& a, int& b);
};

#endif
