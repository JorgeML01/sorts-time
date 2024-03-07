#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP

class QuickSort {
public:
    QuickSort();

    // Función para realizar el Quick Sort
    void sort(int arr[], int size);

private:
    // Función auxiliar para realizar la partición del array
    int partition(int arr[], int low, int high);

    // Función auxiliar para implementar el algoritmo Quick Sort
    void quickSort(int arr[], int low, int high);
};

#endif
