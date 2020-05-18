#include <iostream>
#include <vector>

// You need to implement counting sort algorithm.
// In your solution you have to follow the template:
//

// Input format:
// The first line contains one integer number N (0 < N < 10 000),
// that denotes a number of elements you want to sort.
// The second line contains N integer numbers (a <= number <= b) separated by space.

// Output format:
// Print the sorted array. Each number should be separated by space.


void CountingSort(std::vector<int>& numbers) {

}

int main() {

  int n;
  std::cin >> n;

  std::vector<int> numbers(n);
  for (int& number: numbers) {
    std::cin >> number;
  }

  CountingSort(numbers);

  for (int number: numbers) {
    std::cout << number << ' ';
  }

  return 0;
}