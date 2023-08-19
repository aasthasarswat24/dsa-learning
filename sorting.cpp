/*
  Selection Sort
  - one by one elements are selected and traversed and then replaced by the minimum element
  example : {45, 10, 63, 88, 9, 6}
  step1:    {6, 10, 63, 88, 9, 45}
  step2:    {6, 9, 63, 88, 10, 45}
  step3     {6, 9, 10, 88, 63, 45}
  step4:    {6, 9, 10, 45, 63, 88}
  step5:     sorted
*/

void swap (int arr[], int index1, int index2){
  int k = arr[index2];
  arr[index2] = arr[index1];
  arr[index1] = k;
}

void selectionSort (int arr[], int n)
{̥  
  for (int i = 0; i < n - 1; i++){
    int minIndex = i;

    // Find the min element in rest array
    // j<n-1 because we dont have to check for last element, before this step the array is sorted
    for (int j = i + 1; j < n; j++){
      if(arr[j]<arr[minIndex]){
        minIndex = j;
      }
    }

    if(minIndex != i){
      swap(arr, i, minIndex);
    };
  };
}

/*
  Bubble Sort
  - traverse, compare right adjacent element, move bigger to right
*/
void bubbleSort (int arr[], int n)
{
  bool swapped;
  for (int i = 0; i < n - 1; i++){
      swapped = false;
      for(int j = 0; j < n - i - 1; j++){
        if (arr[j] > arr[j + 1])
        {
          swap(arr, j, j+1);
          swapped = true;
        }
      }
    
    if(swapped == false){
        break;
    }
  }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        cout << endl;
    }
}

int main(){
  int arr[] = {45, 10, 63, 88, 9, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  int *newArr = new int[n];
  /*
    int newArr[n] = arr;
    1. n is not a constant. and while using arr[n] n should be a constant
    2. if we say newArr = arr, the value they are pointing is equal only, not the whole array
  */
  for (int i = 0; i < n; i++){
    newArr[i] = arr[i];
  }

  // selectionSort(newArr, n);
  bubbleSort(newArr, n);

  printArray(newArr, n);

  return 0;
};
