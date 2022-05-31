#include <iostream>
#include "Sorting.h"
#include <ctime>
#include <string>
#include <chrono>


std::string printVector(std::vector<int> unsortedVector){
  std::string values;
  for(size_t i = 0; i < unsortedVector.size(); i++){
    values += std::to_string(unsortedVector[i]) + " ";
  }
  return values;
}


int main(){
  // initialize random
  srand((unsigned)time(0));

  // Sorting Algorithms
  Sorting sortAlgorithms;

  std::vector<int> unsortedVector;
  std::vector<int> unsortedVectorForMerge;
  std::vector<int> unsortedVectorForQuick;
  int size = 25000;
 
  // Create a vector with random values
  for(int i = 0; i < size; i++){
    unsortedVector.push_back(rand()%100 + 1);
  }

  unsortedVectorForMerge = unsortedVector;
  unsortedVectorForQuick = unsortedVector;
  // Display unsorted and sorted vectors
  /*std::cout << "\nSize of unsorted Vector: " 
    << unsortedVectorForQuick.size() << "\n\n";
  std::cout << "Unsorted Vector List: " 
    << printVector(unsortedVectorForQuick) << "\n\n\n";
  sortAlgorithms.QuickSort(unsortedVectorForQuick, 0, size-1);
  std::cout << "Sorted Vector List: " << 
    printVector(unsortedVectorForQuick) << std::endl;
*/

  // Check execution speed
  std::cout << "Checking Execution Speeds for Sorting Algorithms (milliseconds)" << std::endl;
  // Bubble Sort
  auto start = std::chrono::system_clock::now();
  sortAlgorithms.BubbleSort(unsortedVector);
  auto end = std::chrono::system_clock::now();
  auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>
    (end - start);
  std::cout << "Bubble Sort Execution Speed: " << 
    elapsed.count() << "\n";
  
  // Selection Sort
  start = std::chrono::system_clock::now();
  sortAlgorithms.SelectionSort(unsortedVector);
  end = std::chrono::system_clock::now();
  elapsed = std::chrono::duration_cast<std::chrono::milliseconds>
    (end - start);
  std::cout << "Selection Sort Execution Speed: " << 
    elapsed.count() << "\n";

  // Insertion Sort 
  start = std::chrono::system_clock::now();
  sortAlgorithms.InsertionSort(unsortedVector);
  end = std::chrono::system_clock::now();
  elapsed = std::chrono::duration_cast<std::chrono::milliseconds>
    (end - start);
  std::cout << "Insertion Sort Execution Speed: " << 
    elapsed.count() << "\n";

  // Merge Sort
  start = std::chrono::system_clock::now();
  sortAlgorithms.MergeSort(unsortedVectorForMerge, 0, size-1);
  end = std::chrono::system_clock::now();
  elapsed = std::chrono::duration_cast<std::chrono::milliseconds>
    (end - start);
  std::cout << "Merge Sort Execution Speed: " << 
    elapsed.count() << "\n";

  // Quicksort
  start = std::chrono::system_clock::now();
  sortAlgorithms.QuickSort(unsortedVectorForQuick, 0, size-1);
  end = std::chrono::system_clock::now();
  elapsed = std::chrono::duration_cast<std::chrono::milliseconds>
    (end - start);
  std::cout << "QuickSort Execution Speed: " << 
    elapsed.count() << "\n";


  return 0;
}
