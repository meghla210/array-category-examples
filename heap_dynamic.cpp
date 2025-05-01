// heap_dynamic.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr; // dynamic heap array
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) arr.push_back((i + 1) * 3);

    cout << "Heap-Dynamic (C++): ";
    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    return 0;
}
