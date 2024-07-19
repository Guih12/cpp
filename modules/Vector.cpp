#include "Vector.h"

Vector::Vector(int s) {
  size = s;
}

int Vector::getSize() {
  return size;
}

int Vector::sumValue(int value) {
  return size + value;
}

int Vector::binarySearch(const std::vector<int>& array, int value) {
  int left = 0;
  int right = array.size() - 1;

  while(left <= right) {
    int middle = left + (right - left) / 2;

    if(array[middle] == value) {
      return middle;
    }

    if(array[middle] < value) {
      left = middle + 1;
    } else {
      right = middle - 1;
    }
  }

  return -1;
}

//aqui voce implementa as funcoes da classe