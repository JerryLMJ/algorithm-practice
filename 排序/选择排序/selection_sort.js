function findSmallest(arr) {
  let smallest = arr[0];
  let smallest_index = 0;
  for (let index = 1; index < arr.length; index++) {
    if (arr[index] < smallest) {
      smallest = arr[index];
      smallest_index = index;
    }
  }
  return smallest_index;
}

function selectionSort(arr) {
  let newArr = [];
  while (arr.length > 0) {
    const smallest = findSmallest(arr);
    newArr.push(arr.splice(smallest, 1)[0]);
  }

  return newArr;
}

console.log("result:", selectionSort([5, 2, 7, 12, 3, 6]));
