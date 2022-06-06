#include <iostream>
#include "Sorting.h"
#include "Searching.h"
#include "Graph.h"
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
  // Searching Algorithms
  Searching searchAlgorithms;

  std::vector<int> unsortedVector;
  std::vector<int> unsortedVectorForMerge;
  std::vector<int> unsortedVectorForQuick;
  int size = 75;
 
  // Create a vector with random values
  for(int i = 0; i < size; i++){
    unsortedVector.push_back(rand()%100 + 1);
  }

  unsortedVectorForMerge = unsortedVector;
  unsortedVectorForQuick = unsortedVector;

  // Check execution speed
  //std::cout << "Checking Execution Speeds for Sorting Algorithms" 
    // << std::endl;

  // Bubble Sort
  /*start = std::chrono::system_clock::now();
  sortAlgorithms.BubbleSort(unsortedVector);
  end = std::chrono::system_clock::now();
  elapsed = std::chrono::duration_cast<std::chrono::milliseconds>
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
    elapsed.count() << "\n";*/

  // Quicksort
  auto start = std::chrono::system_clock::now();
  sortAlgorithms.QuickSort(unsortedVectorForQuick, 0, size-1);
  auto end = std::chrono::system_clock::now();
  auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>
    (end - start);
  std::cout << "QuickSort Execution Speed: " << 
    elapsed.count() << "\n";

  std::cout << printVector(unsortedVectorForQuick) << std::endl;

  // Binary Search
  int search = 75;
  std::cout << "value we are looking for: " << search << std::endl;
  int index = searchAlgorithms.binarySearch(unsortedVectorForQuick, search);
  std::cout << index << std::endl;
  std::cout << unsortedVectorForQuick[index] << "\n\n\n";
  

  Graph graph(4);
  graph.addEdge(0,1);
  graph.addEdge(0,2);
  graph.addEdge(1,2);
  graph.addEdge(2,0);
  graph.addEdge(2,3);
  graph.addEdge(3,3);
  std::cout << graph.printGraph() << std::endl;

  return 0;
}
