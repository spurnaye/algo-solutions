#include <vector>

int maxSequence(const std::vector<int>& arr){
  if(arr.size() == 0) return 0;
  int max_sum = 0; int local_max = 0;
  for(auto el: arr){
    local_max = std::max(el, local_max+el);
    max_sum = std::max(max_sum, local_max);
  }
  return max_sum;
}
