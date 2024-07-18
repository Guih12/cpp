#include <iostream>

using namespace std;

int main () {
  int x = 2;
  int y = 3;

  int* p = &x;

  int* q = &y;

  cout << "valor numero" << &x << "\n";
  cout << "valor do ponteiro " << p  << "\n"; //endereço de memorória

  cout << "valor apontado" << *p << "\n";

  cout << "valor de antes de X: " << x << endl;

  int&r = x; //tem o mesmo endereço de memória

  r = 20;

  int y2 = y; //apenas cópia da variável

  y2 = 50;

  cout << "valor de r: " << &r << endl;

  cout << "valor de X: " << x << endl;

  cout << "valor de Y antes: " << y << endl;

  cout << "valor de y2: " << y2 << endl;

  cout << "valor do x: " << x << endl;

  cout << "valor de *p -> " << *p << endl;

  int val = 7;

  int& are { x };

  cout << "valor de are: " << &are << endl;
}