#include <vector>
#include <iostream>

void MergeSort(std::vector<long>& v) {
  // add your code here
}

int main() {

  int n;
  std::cin >> n;

  std::vector<long> numbers(n);
  for (long& number: numbers) {
    std::cin >> number;
  }

  MergeSort(numbers);

  for (long number: numbers) {
    std::cout << number << ' ';
  }

  return 0;
}