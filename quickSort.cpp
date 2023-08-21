int partition (int array[], int low, int high){
  int pivot = array[high];
  int index = low - 1;
  
  for(int i=low; i<high -1; i++){
    if(array[i] < pivot){
      index++;
      swap(array[index], array[i]);
    }
  }
    swap(array[index + 1], array[high]);
    return index + 1;
}

void quickSort(int array[], int low, int high){
  if(low>high)
  return;

  int pi = partition(array, low, high);
  quickSort(array, low, pi-1);
  quickSort(array, pi, high);
}


// python
def partition(array, low, high):
  pivot = array[high]
  index = low-1

  i=low

  while(i<high-1){
    if(array[i] < pivot):
      index+=1
      //swapping
      (array[index], array[i]) = (array[i], array[index])
    i+=1
  }
  (array[index+1], array[high]) = (array[high], array[index+1])
  return index +1

def quickSort (array, low, high):
  if low < high :
    return
  pi = partition(array, low, high)
  quickSort(array, low, pi-1)
  quickSort(array, pi, high)
