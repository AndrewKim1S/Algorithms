#include <iostream>
#include "Sorting.h"
#include <ctime>
#include <string>

std::string printVector(std::vector<int> unsortedVector){
  std::string values;
  for(size_t i = 0; i < unsortedVector.size(); i++){
    values += unsortedVector[i] + " ";
  }
  return values;
}

int main(){
  srand((unsigned)time(0));

  // Sorting Algorithms
  Sorting sortAlgorithms;

  std::vector<int> unsortedVector;
  int size = 100;
 
  // Create a vector with random values
  for(int i = 0; i < size; i++){
    // std::cout << rand()%100 + 1 << "\n";
    unsortedVector.push_back(rand()%100 + 1);
  }

  std::cout << "Size of unsorted Vector: " << unsortedVector.size() 
    << "\n";
  std::cout << "Unsorted Vector List: " << printVector(unsortedVector)
    << "\n";


  return 0;
}
