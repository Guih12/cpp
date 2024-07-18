#include <iostream>

using namespace std;

class MyVector {
public:
  MyVector(int s) :elements{new double[s]}, size{s} {}
  
  double& operator[](int i) { 
    return elements[i]; 
  }

  int getSize() {
    return size;
  }

private:
  double *elements;
  int size;
};


double read_and_sum(int s) {
  MyVector v(s);

  for(int i=0; i != v.getSize(); ++i) {
    cin >> v[i];
  }

  double sum = 0;

  for(int i=0; i!= v.getSize(); ++i) {
    sum += v[i];
  }
  return sum;
}


void print_size(MyVector* vector) {
  cout << vector->getSize() << endl;
}// sempre que passar um ponteiro de objeto como parâmetro, na chamada da função precisamos passar o endereco de memória

int main () {

  MyVector v(10);

  cout << read_and_sum(3) << endl;

  print_size(&v);// chamada da funcão
}