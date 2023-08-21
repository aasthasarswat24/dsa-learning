/*
Merge Sort 
- keep on dividing array, and then merge it, keeping the bigger values in right
mergeSort(<array>)
1> find mid
2> mergeSort(<first half>)
3> mergeSort(<second half>)
4> merge
*/
0,1,2,3,4
5,6,7,8

void merge (int array[], int start, int mid, int end){
  // left array
  int sizeOfLeftArray = mid - start + 1;
  int *leftArray = new int[sizeOfLeftArray];

  for (int i = 0; i <= mid; i++){
    leftArray[i] = array[start+i];
  }

  // right array
  int sizeOfRightArray = end - (mid + 1) - 1;
  int *rightArray = new int[sizeOfRightArray];

  for (int i = 0 ; i <= sizeOfRightArray ; i++){
    rightArray[i] = array[mid + 1 + i];//
  }

  int i = 0, left = 0, right = 0;
  
  /*
    left element < right element --- insert left in array
    else right 
  */
  while (left < sizeOfLeftArray && right < sizeOfRightArray){
    if(leftArray[left] > rightArray[right]){
      array[i] = rightArray[right];
      right++;
    }else{
      array[i] = leftArray[i];
      left++;
    }
    i++;
  }

  while(left< sizeOfLeftArray){
    array[i] = leftArray[left];
    left++;
    i++;
  }

  while(right< sizeOfRightArray){
    array[i] = rightArray[right];
    right++;
    i++;
  }

  delete leftArray, rightArray; 
}

void mergeSort (int array[], int start, int end){
  if(start >= end)
    return;

  int mid = (start + end) / 2;
  mergeSort(array, start, mid);
  mergeSort(array, mid + 1, end);

  merge(array, start, mid, end);
}


// PYTHON
def merge(arr, leftArray, rightArray):
    i=j=k=0
    // array - sort and add elements
    while i < len(leftArray) and j< ln(rightArray):
      if leftArray(i) > rightArray[j]:  
        arr[k] = rightArray[j]
        j+=1
      else
        arr[k] = leftArray[i]
        i+=1
      k+=1
    
    while i<len(leftArray):
      arr[k] = leftArray[i]
      i+=1
      k+=1

    while j < len(rightArray):
      arr[k]= rightArray[j]
      j+=1
      k+=1

def mergeSort(arr);
  if len(arr) > 1:

    mid = len/2;
    leftArray = [:mid]
    rightArray = [mid:]
    
    mergeSort(leftArray)
    mergeSort(rightArray)
    merge()

    
