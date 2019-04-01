
#Ternary Search
def ternarySearch(left, right, value, arr):
    if left <= right:
        mid1 = left + (right - left)//3
        mid2 = right - (right - left)//3
        if value == arr[mid1]:
            return mid1
        elif value == arr[mid2]:
            return mid2
        if value < arr[mid1]:
            return ternarySearch(left, mid1 - 1, value, arr)
        elif value > arr[mid2]:
            return ternarySearch(mid2 + 1, right, value, arr)
        else:
            return ternarySearch(mid1 + 1, mid2 - 1, value, arr)
    return -1



arr = [int(temp) for temp in input().split()]
value = int(input())
left,right = 0, len(arr)
print(arr.sort())
print(ternarySearch(left, right, value, arr))
