#include <vector>
#include <iostream>

class Heap {
 public:
  Heap() {}
  // Constructor to build heap from array
  Heap(const std::vector<long>& array) {}
  // Insert element in heap
  void Insert(long element) {}
  // Get a maximum element
  long ExtractMax() {}
  ~Heap() {}
};

void HeapSort(std::vector<long>& v) {
  // Implement sort here
}

int main () {

  int n;
  std::cin >> n;

  std::vector<long> numbers(n);
  for (long& number: numbers) {
    std::cin >> number;
  }

  HeapSort(numbers);

  for (long number: numbers) {
    std::cout << number << ' ';
  }


  return 0;
}