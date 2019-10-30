function quickSort(arr) {
  if (arr.length <= 1) {
    return arr;
  } else {
    const pivot = arr[0];
    const less = [];
    const greater = [];
    for (let i = 1; i < arr.length; i++) {
      const el = arr[i];
      if (el <= pivot) {
        less.push(el);
      } else {
        greater.push(el);
      }
    }
    return quickSort(less)
      .concat(pivot)
      .concat(quickSort(greater));
  }
}

const arr = [6, 2, 1, 8, 7, 3, 5];
console.log("result: ", quickSort(arr));
