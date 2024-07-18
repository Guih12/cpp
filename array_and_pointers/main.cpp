#include <iostream>

using namespace std;

int binary_search(int values[], int postition) {
  int left = 0;
  int right = 3;

  while(left <= right) {
    int mid = int(left + right) / 2;

    if(values[mid] == postition) return mid;

    if(values[mid] < postition) {
      left = left + 1;
    }else{
      right = right - 1;
    }
  }

  return -1;
}

void increment() {
  int v[] = { 0, 1, 2 };

  for(auto&x : v) {
    ++x;
  }

  for(auto x: v) {
    cout << x << "\n";
  }
}

void sort(vector<double>& vetor) {
}

void sum(const vector<double>&) {}


int count_x(const char* p, char x) 
{
  if(p == nullptr) {
    return 0;
  }
  int count = 0;

  for(; *p !=0; ++p) {
    if(*p == x) {
      ++count;
    }
  }

  return count;
}

int main (){
  char v[6] = { 1, 2, 3, 4, 5, 6}; //array de 6 posiçoes

  int value;

  char* ptr_p; // declaração de ponteiro

  char *p = &v[3]; // p aponta para o 4 elemento do vetor

  char x = *p; //*p é um objeto que aponta para o p
  
  cout << "file for array";
  
  int v1[3] = { 1, 2, 3,};

  //print(v1, 0);

  cout << binary_search(v1, 1) << "\n";

  increment();

  return 0;
}