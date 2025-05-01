// stack_dynamic.cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n]; // variable-length array, size known at runtime
    for (int i = 0; i < n; i++) arr[i] = i + 1;

    cout << "Stack-Dynamic (C++): ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
