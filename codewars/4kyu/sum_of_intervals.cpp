#include <vector>
#include <utility>


using vec_int = std::vector<std::pair<int, int>>;
int sum_intervals(vec_int intervals){
  std::sort(intervals.begin(), intervals.end());
  
  vec_int temp = {*intervals.begin()};
  int total_interval = 0;
  for(auto it = intervals.begin()+1; it < intervals.end(); ++it){
      if((*it).first <= temp.back().second){
        if((*it).second >= temp.back().second){
            temp.back().second = (*it).second;
        }else continue;
      }else{
        temp.push_back(*it);  
      }
  }
  for(const auto& i: temp){
      total_interval += (i.second - i.first);
  }
  return total_interval;
}

int main(){
}
