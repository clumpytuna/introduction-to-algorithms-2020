#include <vector>

class Heap {
 public:
  Heap();
  // Constructor to build heap from array
  Heap(const std::vector<long> array);
  // Insert element in heap
  Insert(long element);
  // Get a maximum element
  long ExtractMax();
}

int main () {
  return 0;
}