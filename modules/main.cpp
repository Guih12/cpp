#include <iostream>
#include <vector>
#include <unordered_map>
#include "Vector.h"

template<typename KeyType, typename ValueType>
using Map = std::unordered_map<KeyType, ValueType>; //alias generic


template<typename Type, typename Value>
using Pair = std::pair<Type, Value>; //template generic

template<typename T, typename Func>
void applyToEeach(std::vector<T>& vec, Func func) {
  std::for_each(vec.begin(), vec.end(), func);
}

template<typename T>
using MyVector = std::vector<T>;

using namespace std;

Pair<int, int> sumTarget(MyVector<int>& vector, int target) {
  for(const auto& v : vector) {
    for(const auto& b : vector) {
      if( (v + b ) == target) {
        return std::make_pair(v, b);
      }      
    }
  }

  return std::make_pair(0, 0);
}

int main() {
  // Vector v(10);

  // MyVector<string> names = {"Lucas", "Joao", "Maria"};

  // applyToEeach(names, [](std::string& value) {
  //   cout << value << endl;
  // });

  // for(const auto& name: names) {
  //   cout << name << endl;
  // }

  // for(vector<std::string>::const_iterator it = names.begin(); it != names.end(); ++it) {
  //   cout << *it << endl;
  // }

  // Map<std::string, std::string> my_app;

  // my_app.insert({"name", "Lucas"});

  // for(const auto& pair: my_app) {
  //   cout << pair.first << " " << pair.second << endl;
  // }

  vector<int> array = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

  std::pair<int, int> result = sumTarget(array, -1);

  cout << result.first << endl;
  cout << result.second << endl;


  // int result = v.binarySearch(array, 10);

  // cout << result << endl;

  // cout << v.getSize() << endl;

  // int sum = v.sumValue(20);

  // cout << sum << endl;
}
