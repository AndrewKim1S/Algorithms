#include "Searching.h"


Searching::Searching(){}
Searching::~Searching(){}


int
Searching::binarySearch(std::vector<int> vector, int x){
  int start = 0;
  int end = vector.size() -1;
  while(start <= end){
    int mid = (start + end)/2;
    if(vector[mid] == x){
      return mid;
    }
    else if(vector[mid] > x){
      end = mid-1;
    } else {
      start = mid+1;
    }
  }
  return -1;
}
