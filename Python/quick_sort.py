#quick sort 1st iteration

def quickSort(arr):
    pivot = arr[0]
    loop1 = 1
    loop2 = len(arr)-1
    right = len(arr) -1
    left = 1
    while right > left-1:
        for left in range(loop1, loop2):
            if arr[left] > pivot:
                break
        for right in range(loop2,loop1,-1):
            if arr[right] < pivot:
                break
        arr[left], arr[right] = arr[right], arr[left]

        if right == left-1:
            arr[0],arr[right] = arr[right], arr[0]

        loop1=left
        loop2=right
    return arr
            
arr = [int(x) for x in input().split()]
arr.sort()
print(quickSort(arr))
