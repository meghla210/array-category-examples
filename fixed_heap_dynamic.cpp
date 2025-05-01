// fixed_heap_dynamic.cpp
#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5]; // fixed size heap allocation
    for (int i = 0; i < 5; i++) arr[i] = (i + 1) * 2;

    cout << "Fixed Heap-Dynamic (C++): ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";

    delete[] arr; // free heap memory
    return 0;
}
