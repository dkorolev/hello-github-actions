#include <iostream>
#include <string>
#include <map>

int main() {
  std::map<std::string, int> m;
  m["one"] = 1;
  m["answer"] = 42;
  for (auto const& [key, value] : m) {
    std::cout << key << " : " << value << std::endl;
  }
  std::cout << "Done!" << std::endl;
}
