#include "src/lib/solution.h"
#include <iostream>
#include<vector>

int main() {
  CPPLib s;
  std::string from="af2";
  std::string to="ksa";

  std::map<char, char> map = s.Mappable(from,to); 
  for (const auto & iter : map)
  std::cout << iter.first << " -> " << iter.second << std::endl;


  return 0;
}