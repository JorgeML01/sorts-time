#include "ArrayTest.hpp"
#include "BubbleSort.hpp"

#include<cstdlib>
#include <iostream>

using namespace std;

int main() {

    ArrayTest* arrayObj = new ArrayTest();
    int* longArray = arrayObj->getLongArray();
    int* shortArray = arrayObj->getShortArray();

    // Objs. Sorts.
    //BubbleSort* objBubble = new BubbleSort();
    //objBubble->sort(shortArray, 10);


    // for (int i = 0; i < 10; i++) {
    //     cout << " " + shortArray[i];
    // }
    // cout << "\n\n";

    delete arrayObj;
    return 0;
}
