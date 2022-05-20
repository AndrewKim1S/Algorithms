#include "Sorting.h"

Sorting::Sorting(){

}


Sorting::~Sorting(){

}


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
