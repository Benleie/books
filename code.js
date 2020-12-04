

function binary_search(list, item) {
  let low = 0
    , high = list.length - 1
  while(low <= high) {
    let mid = Math.ceil((low + high) / 2)
    if(list[mid] === item) return mid
    if(list[mid] > item)
      high = mid - 1
    else low = mid + 1
  }
  return -1
}
const list1 = [ 1, 3, 5, 7, 9, 11, 13, 15 ]
console.log(binary_search(list1, 5))
console.log(binary_search(list1, 13))
console.log(binary_search(list1, 12))