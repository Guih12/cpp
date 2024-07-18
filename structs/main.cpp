#include <iostream>

using namespace std;


struct MyVector {
  double* elements; //pointeiro de elementos
  int size; //numero de elementos
};

void my_vector_init(MyVector& vector, int size) {
  vector.elements = new double[size];
  vector.size = size;
}

void my_vector_init_pointer(MyVector* vector, int size) {
  vector->elements = new double[size];
  vector->size= size;
}

void read_vector_using_pointer(int size) {
  MyVector* vector = new MyVector();

  my_vector_init_pointer(vector, size);

  for(int i =0; i <= size; i++) {
    cin >> vector->elements[i];
  }

  for(int i=0; i<=size; i++) cout << vector->elements[i] << endl;
}

// double read_and_sum(int size) {
//   MyVector v;

//   my_vector_init(v, size);

//   for(int i=0; i!=size; ++i) {
//     cin >> v.elements[i];
//   }

//   double sum = 0;

//   for(int i=0; i!=size; ++i) {
//     sum += v.elements[i];
//   }

//   return sum;
// }

// void f(MyVector v, MyVector& rv, MyVector* pv) {
//   int i1 = v.size;// acessar atraves do nome

//   int i2 = rv.size;// acessar atraves de referencia

//   int i3 = pv->size; //acessar atraves de ponteiros
// }

//criei usando referêcia e ponteiros

int main () {
  read_vector_using_pointer(3);
}