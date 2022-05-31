#include "Sorting.h"

Sorting::Sorting(){}
Sorting::~Sorting(){}


std::vector<int>
Sorting::BubbleSort(std::vector<int> vector){
  for(size_t i = 0; i < vector.size(); i++){
    for(size_t k = 0; k < vector.size()-1; k++){
      // If value in index to the left is greater swap values
      int j = vector[k];
      if(j > vector[k+1]){
        vector[k] = vector[k+1];
        vector[k+1] = j;
      }
    }
  }
  return vector;
}


std::vector<int>
Sorting::SelectionSort(std::vector<int> vector){
  for(size_t i = 0; i < vector.size(); i++){
    // Find the lowest value
    size_t minIndex = i;
    for(size_t k = i+1; k < vector.size(); k++){
      if(vector[k] < vector[minIndex]){
        minIndex = k;
      }
    }
  
    if(minIndex != i){
      int sub = vector[i];
      vector[i] = vector[minIndex];
      vector[minIndex] = sub;
    }
  }
  return vector;
}


std::vector<int>
Sorting::InsertionSort(std::vector<int> vector){
  for(size_t i = 0; i < vector.size(); i++){
    int k = i-1;
    int value = vector[i];
    while(vector[k] > value && k >= 0){
      vector[k+1] = vector[k];
      k--;
    } 
    vector[k+1] = value;
  } 
  return vector;
}


void
Sorting::MergeSort(std::vector<int>& vector,
  int start, int end){
  if(start >= end){
    return;
  }
  int mid = start + (end - start) / 2;
  MergeSort(vector, start, mid);
  MergeSort(vector, mid+1, end);
  merge(vector, start, mid, end);
}


void
Sorting::merge(std::vector<int>& vector,
  int start, int mid, int end){
  std::vector<int> left, right;
  left.resize(mid - start + 1);
  right.resize(end - mid);

  for (size_t i = 0; i < left.size(); i++){
    left[i] = vector[i + start];
  }
  for (size_t k = 0; k < right.size(); k++){
    right[k] = vector[k + mid + 1];
  }

  size_t indexLeft = 0, indexRight = 0;
  int indexMerged = start;

  while(indexLeft < left.size() && indexRight < right.size()){
    if(left[indexLeft] <= right[indexRight]){
      vector[indexMerged] = left[indexLeft];
      indexLeft++;
    } else {
      vector[indexMerged] = right[indexRight];
      indexRight++;
    }
    indexMerged++;
  }

  // Remainder values in left or right vectors are just added to the end
  while(indexLeft < left.size()){
    vector[indexMerged] = left[indexLeft];
    indexMerged++;
    indexLeft++;
  }
  while(indexRight < right.size()){
    vector[indexMerged] = right[indexRight];
    indexMerged++;
    indexRight++;
  }

}


void
Sorting::QuickSort(std::vector<int>& vector,
  int low, int high){
  if(low >= high){
    return;
  } 
  int index = partition(vector, low, high);
  QuickSort(vector, low, index -1);
  QuickSort(vector, index +1, high);
}


int
Sorting::partition(std::vector<int>& vector,
  int low, int high){
  int pivot = vector[high];
  int j = low-1;
  for(int i = low; i < high; i++){
    // if current element is greater than piivot, swap
    if(vector[i] < pivot){
      j++;
      std::swap(vector[i], vector[j]);
    }
  }
  std::swap(vector[j+1], vector[high]);
  return j+1;
}


std::vector<int>
Sorting::HeapSort(std::vector<int> vector){
  
  return vector;
}


std::vector<int>
Sorting::RadixSort(std::vector<int> vector){
  
  return vector;
}


std::vector<int>
Sorting::BucketSort(std::vector<int> vector){
  
  return vector;
}
