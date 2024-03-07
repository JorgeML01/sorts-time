#ifndef ARRAYTEST_HPP
#define ARRAYTEST_HPP

#include<cstdlib>
#include <ctime>


class ArrayTest {
public:
    ArrayTest(int size);
    ~ArrayTest();
    int* getArray();

    
private:
    int size;
    int* arr;
    void generateArray();
};

#endif