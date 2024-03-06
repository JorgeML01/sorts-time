#ifndef ARRAYTEST_HPP
#define ARRAYTEST_HPP

#include<cstdlib>
#include <ctime>


class ArrayTest {
public:
    ArrayTest();
    ~ArrayTest();
    int* getLongArray();
    int* getShortArray();

    
private:
    int shortArray[10];
    int longArray[999999];
    void generateLongArray();
    void generateShortArray();
};

#endif