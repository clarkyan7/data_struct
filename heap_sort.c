// heap sort

void swap(int* a. int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void heapify(int* arr, int size, int root) {
  int largest = root;
  int left = root * 2, right = root * 2 + 1;
  
  if (left < n && arr[left] > arr[largest]) {
    largest = left;
  }
  
  if (right < n && arr[right] > arr[largest]) {
    largest = right;
  }
  
  if (largest != root) {
    swap(arr + root, arr + largest);
    heapify(arr, size, largest);
  }
}

void heap_sort(int* arr, int size) {
  for (int i = size / 2 - 1; i >= 0; --i) {
    heapify(arr, size, i);
  }
  
  for (int i = size - 1; i >= 0; --i) {
    swap(arr + i, arr);
    heapify(arr, i, 0);
  }
}
