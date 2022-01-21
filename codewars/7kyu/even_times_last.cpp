#include <vector>
#include <numeric>

int even_last(std::vector<int> nums) {
  int i = 0;
  if(nums.size() == 0) return i;
  int total = std::accumulate(nums.begin(), nums.end(), 0, [&i](int t, int a ){return t += i++%2==0 ? a : 0;});
  return total*nums.back();
}


int main(){
}
