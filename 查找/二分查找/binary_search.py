def binary_search(list, value):
  low = 0
  high = len(list) - 1

  while low <= high:
    mid = (low + high) // 2
    guess = list[mid]
    
    if guess == value:
      return mid
    elif guess < value: 
      low = mid + 1
    else:
      high = mid - 1
  return None

list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
value = 3
print('result:', binary_search(list, value))