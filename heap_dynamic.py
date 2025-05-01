# heap_dynamic.py

arr = []  # starts empty, grows dynamically
n = int(input("Enter number of elements: "))

for i in range(n):
    arr.append((i + 1) * 3)

print("Heap-Dynamic (Python):", arr)
