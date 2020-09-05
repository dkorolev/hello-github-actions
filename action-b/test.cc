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
  std::cout << "Done II (the previous one was 18s in this step)!" << std::endl;
  std::cout << "Previous: https://github.com/dkorolev/hello-github-actions/runs/1075795678" << std::endl;
}
