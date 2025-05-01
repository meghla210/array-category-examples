// fixed_stack_dynamic.cpp
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // fixed size at compile time
    cout << "Fixed Stack-Dynamic (C++): ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    return 0;
}
