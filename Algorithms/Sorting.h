#pragma once
#include <vector>
#include <iostream>

class Sorting{

  public:
    Sorting();
    ~Sorting();

    std::vector<int> BubbleSort(std::vector<int> vector);
    std::vector<int> SelectionSort(std::vector<int> vector);
    std::vector<int> InsertionSort(std::vector<int> vector);
    void MergeSort(std::vector<int>& vector, 
      int start, int end);
    void merge(std::vector<int>& vector, int start, int mid, int end);
    std::vector<int> QuickSort(std::vector<int> vector,
      int low, int high);
    std::vector<int> HeapSort(std::vector<int> vector);
    std::vector<int> RadixSort(std::vector<int> vector);
    std::vector<int> BucketSort(std::vector<int> vector);

  private:

};
