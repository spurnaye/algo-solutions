#include <string>
#include <cmath>

int calc(const std::string& x) {
  std::string output;
  std::cout << "x "<< x << '\n';
  for(auto it = x.begin();  it != x.end(); ++it){
    output += std::to_string(static_cast<int>(*it));
  }
  
  auto output2 = output;
  std::transform(output.begin(), output.end(), output2.begin(), [](char c){
      if(c == '7') return '1';
      else return c;
  });
  
  uint64_t num1 = 0;
  uint64_t num2 = 0;
  for(auto el: output){
    num1 += (el - '0');
  }
  for(auto el: output2){
     num2 += (el - '0');
  }

  return num1 - num2;
}

int main(){

}
