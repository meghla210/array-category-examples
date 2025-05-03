# array-category-examples
programs to demonstrate array categories in C++ and Python

Comparison Between C++ and Python for Array Categories:
In this assignment, I have implemented four types of array categories in both C++ and Python. While both languages can handle arrays, the way they manage memory and define arrays is quite different. Below is a detailed explanation:

1. Fixed Stack-Dynamic
C++: In C++, we declare arrays like int arr[5];. This means the array size is fixed and known at compile time. It is stored in the stack memory. Once declared, the size can't be changed.

Python: Python does not have stack memory management like C++. But we can create a list with fixed values like arr = [1, 2, 3, 4, 5]. Although the size looks fixed, Python lists are flexible and can grow or shrink — but here we keep the size fixed to match the category.

2. Stack-Dynamic
C++: This means the size of the array is decided during runtime. For example:
int n;
cin >> n;
int arr[n];
The size n is taken from the user, and the array is created on the stack based on that value. This is known as a Variable Length Array (VLA).

Python: In Python, we can take input for the size and then create a list using a loop or list comprehension:
n = int(input())
arr = [i for i in range(n)]
The list is created at runtime, which matches the behavior of a stack-dynamic array.

3. Fixed Heap-Dynamic
C++: In this case, the array is created in the heap with a fixed size. We use the new keyword like this:
int* arr = new int[5];
This gives us more control over memory, but we must also delete it later using delete[] arr;.

Python: Python doesn't use manual heap allocation. But using the ctypes library, we can simulate a fixed-size heap array like:from ctypes import *
arr = (c_int * 5)(1, 2, 3, 4, 5)
This behaves like a fixed-size array in the heap.

4. Heap-Dynamic
C++: For fully dynamic behavior, C++ uses vectors:
vector<int> arr;
arr.push_back(1);
arr.push_back(2);
vector<int> arr;
arr.push_back(1);
arr.push_back(2);
Vectors can grow and shrink at runtime and are stored in heap memory.

Python: Lists in Python are dynamic by default. We can use append() to add items:
arr = []
arr.append(1)
arr.append(2)
This matches the heap-dynamic category because memory grows at runtime.


Summary of Differences:
1.C++ provides more manual control over memory, which helps to understand the difference between stack and heap more clearly.

2.Python is more abstract and high-level — it hides memory details from the programmer, making it easier to use but less visible in terms of memory handling.

3.In C++, for heap arrays, we must clean memory manually. In Python, memory management is automatic.

4.Overall, both languages can represent all four categories, but the syntax and memory model are very different.
