#include <vector>
#include <iostream>

void InsertionSort(std::vector<long>& v) {
  // add your code here
}

int main() {

  int n;
  std::cin >> n;

  std::vector<long> numbers(n);
  for (long& number: numbers) {
    std::cin >> number;
  }

  InsertionSort(numbers);

  for (long number: numbers) {
    std::cout << number << ' ';
  }

  return 0;
}