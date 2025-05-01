# fixed_heap_dynamic.py

import ctypes

arr = (ctypes.c_int * 5)()  # fixed size on heap using ctypes

for i in range(5):
    arr[i] = (i + 1) * 2

print("Fixed Heap-Dynamic (Python):", [arr[i] for i in range(5)])
