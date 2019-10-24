function binary_search(list, value) {
  var low = 0;
  var high = list.length - 1;

  while (low <= high) {
    const mid = parseInt((low + high) / 2);
    const guess = list[mid];
    if (guess === value) {
      return mid;
    } else if (guess < value) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return null;
}

const list = [1, 2, 3, 4, 5, 6, 7, 8, 9];
const value = 7;
console.log("result:", binary_search(list, value));

/*
  $ node ./查找/二分查找/binary_search.js
 */
