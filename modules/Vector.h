#include <vector>

class Vector {
  public:
    Vector(int s);
    int getSize();
    int sumValue(int value);

    int binarySearch(const std::vector<int>& array, int value);

  private:
    double* elements;
    int size;
};