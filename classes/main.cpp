#include <iostream>
#include <vector>

using namespace std;

class MyVector {
public:
  MyVector(int s) : elements{new double[s]}, size{s} {}

  double &operator[](int i) { return elements[i]; }

  int getSize() { return size; }

private:
  double *elements;
  int size;
};


enum class Color { red, blue, green };

double read_and_sum(int s) {
  MyVector v(s);

  for (int i = 0; i != v.getSize(); ++i) {
    cin >> v[i];
  }

  double sum = 0;

  for (int i = 0; i != v.getSize(); ++i) {
    sum += v[i];
  }
  return sum;
}

// void increment_vector(std::vector<int> &array) {
//   for (auto &i : array) {
//     i++;
//   }
// }

//ao adicionar um const, eu digo que o parametro por referencia ou ponteiro não pode ser modificado

void print_size(MyVector *vector) {
  cout << vector->getSize() << endl;
} // sempre que passar um ponteiro de objeto como parâmetro, na chamada da
  // função precisamos passar o endereco de memória

int main() {

  MyVector v(10);

  Color x1 = Color::red;

  cout << char(x1) << endl;

  cout << read_and_sum(3) << endl;

  print_size(&v); // chamada da funcão

  //std::vector<int> v1 = {1, 2, 3, 4, 5};

  //increment_vector(v1);

}
