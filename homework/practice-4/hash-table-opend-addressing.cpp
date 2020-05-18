#include <string>
#include <vector>
#include <iostream>

// Implement a chaining hash table using open addressing. You have to follow
// the template and implement all methods. You are free to add
// new fields and methods if you want to.

// Input format:
// The first line of input contains one number N ( 1 < N < 10 000),
// that denote the number of commands
// Next N lines contain one of the commands in the following format:
// 1) + some_key
// 2) - some_key
// 3) ? some_key
// The first symbol on a line denotes a command, then after a space there is a key string.
// '+' means you need to add some_key in the hash table
// '-' means you need to delete some_key in the hash table
// '?' means you need to find some_key in the hash table

// Output format:
// After processing an each command print OK if command was successful,
// print FAIL otherwise.

class HashTable {
 public:

  HashTable();

  // Remember to clear memory after using of hash table.
  ~HashTable();


  // Check if a key exists in the table.
  bool Has(const std::string& key) const;

  // Add a new key.
  // If load factor >= 3/4, then
  // you have to expand the table and do rehashing.
  // Return true if you inserted a key successful,
  // return false if a key is already in the table.
  bool Add(const std::string& key);

  // Remove a key.
  // Return false if there is no such a key if the table,
  // return true if removal is successful.
  // You don't need to reduce the table size.
  bool Remove(const std::string& key);

 private:

  void Rehash();
};


int main() {
  HashTable hashTable;

  int number_of_commands;
  std::cin >> number_of_commands;

  for (int i = 0; i < number_of_commands; ++i) {
    char command;
    std::cin >> command;

    std::string key;
    std::cin >> key;

    switch(command) {
      case '?':
        std::cout << (hashTable.Has(key) ? "OK" : "FAIL") << std::endl;
        break;
      case '+':
        std::cout << (hashTable.Add(key) ? "OK" : "FAIL") << std::endl;
        break;
      case '-':
        std::cout << (hashTable.Remove(key) ? "OK" : "FAIL") << std::endl;
        break;
      default:
        assert(false);
    }
  }
}
