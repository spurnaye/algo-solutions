#include <string>
#include <iostream>
using namespace std; 

string autoMorphic (int number)
{
  std::string square = std::to_string(number*number);
  std::string num = std::to_string(number);
  return square.substr(square.length()-num.length(), num.length()) == num ? 
      "Automorphic" : "Not!!";
}

int main(){
    std::cout << autoMorphic(25) << '\n';
}
