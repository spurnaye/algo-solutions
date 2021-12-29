#include <string>
#include <iostream>

constexpr int ascii_a = 97;

std::string grid(int n) {
  std::string output;
  int temp = 0;
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
        temp = ascii_a + ((i + j) % 26);
        output += static_cast<int>(temp);
        if(j < n -1) output += ' ';
    }
    if(n > 1 && i < n-1) output += '\n';
  }
  return output;
}

int main(){
    std::cout << grid(20) << '\n';
}
