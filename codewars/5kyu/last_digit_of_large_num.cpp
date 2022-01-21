#include <string>
#include <cmath>
#include <iostream>

int modulo(const std::string& s, int i){
  int mod = 0;
  for(size_t dig = 0; dig < s.size(); ++dig){
      mod =( mod*10 + s[dig] - '0') %i;
  }
  return mod;
}

int last_digit(const std::string &str1, const std::string &str2) {
  if((str1 == "0" and str2 == "0") or (str2 == "0")) return 1;
  int exponent  = (modulo(str2,4) == 0) ? 4 : (modulo(str2, 4));
  int pwr_last_dig = std::pow(*str1.rbegin() - '0', exponent);
  return pwr_last_dig % 10;
}

int main(){
}
