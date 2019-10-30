def quickSort(arr):
  if len(arr) <= 1:
    return arr
  else:
    pivot = arr[0]
    less = []
    greater = []
    for i in arr[1:]:
      if i <= pivot:
        less.append(i)
      else:
        greater.append(i)
    return quickSort(less) + [pivot] + quickSort(greater)

arr = [6, 2, 1, 8, 7, 3, 5]
print('result: {}'.format(quickSort(arr)))