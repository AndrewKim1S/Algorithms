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
  int size = 15000;
 
  // Create a vector with random values
  for(int i = 0; i < size; i++){
    unsortedVector.push_back(rand()%100 + 1);
  }

  unsortedVectorForMerge = unsortedVector;
  
  // Display unsorted and sorted vectors
  /*std::cout << "\nSize of unsorted Vector: " 
    << unsortedVectorForMerge.size() << "\n\n";
  std::cout << "Unsorted Vector List: " 
    << printVector(unsortedVectorForMerge) << "\n\n\n";
  sortAlgorithms.MergeSort(unsortedVectorForMerge, 0, size-1);
  std::cout << "Sorted Vector List: " << 
    printVector(unsortedVectorForMerge) << std::endl;
*/

  // Check execution speed
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

  return 0;
}
