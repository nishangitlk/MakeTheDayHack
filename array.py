import array

arr1 = array.array('i', [1, 2, 3])
arr2 = array.array('i', [4, 5, 6])

print("Print Arrays")
print("Array A")
print(arr1) 
print("Array B")
print(arr2)  

print("")
print("Join two Arrays A&B")
arr3 = arr1 + arr2
print(arr3)  # array('i', [1, 2, 3, 4, 5, 6])

print("")
print("Add an element into array, add 4 in array A")
arr1.append(4)
print(arr1)  

print("")
print("Add an element into array, add 10 in array A at index 0")
arr1.insert(0, 10)
print(arr1)  # array('i', [10, 1, 2, 3, 4])

