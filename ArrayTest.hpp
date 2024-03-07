#ifndef ARRAYTEST_HPP
#define ARRAYTEST_HPP

#include<cstdlib>
#include <ctime>


class ArrayTest {
public:
    ArrayTest(int longSize, int shortSize);
    ~ArrayTest();
    int* getLongArray();
    int* getShortArray();

    
private:
    int longSize;
    int shortSize;
    int* shortArray;
    int* longArray;
    void generateLongArray();
    void generateShortArray();
};

#endif