#include <string>
#include <numeric>
#include <iostream>
using namespace std;

string balancedNum (unsigned long long int number )
{
  if(number <= 99) return "Balanced";
  std::string str_num = std::to_string(number);
  int left_sum = 0, right_sum = 0;
  auto size = str_num.size();
  if(str_num.length() % 2 == 0){
    left_sum = std::accumulate(str_num.begin(), str_num.begin()+((size/2)-1), 0);
    right_sum = std::accumulate(str_num.begin()+(size/2)+1, str_num.end(),0);
  }else{
    left_sum = std::accumulate(str_num.begin(), str_num.begin()+(size/2), 0);
    right_sum = std::accumulate(str_num.begin()+(size/2)+1, str_num.end(),0);
  }
  return left_sum == right_sum ?  "Balanced" : "Not Balanced";
}

int main(){
    std::cout << balancedNum(12345) << '\n';
}
