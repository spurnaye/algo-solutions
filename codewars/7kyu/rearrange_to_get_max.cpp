#include <vector>

int max_redigit(const int& num) {
  if (num <= 99 || num > 999) return -1; 
  int orig = num;
  std::vector<int> temp;
  while(orig){
    temp.push_back(orig%10);
    orig /= 10;
  }
   
  std::sort(temp.begin(), temp.end());
  int answer = 0;
  
  for(auto it = temp.rbegin(); it != temp.rend(); ++it){
    answer = *it + answer*10;
  }
  
  return (answer >= num) ? answer : -1;
}


int main(){
}
