#include <vector>
#include <iostream>
#include <stdexcept>

int main() {
  std::vector<bool> vec = {true, false, true};
  int index = 3;

  try {
    if (index >= vec.size() || index < 0) {
      throw std::out_of_range("Index out of bounds");
    }
    bool b = vec[index];
    std::cout << "Value at index " << index << ": " << b << std::endl;
  } catch (const std::out_of_range& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  return 0;
}
