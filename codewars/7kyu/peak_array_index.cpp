#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
#include <map>

using vec = std::vector<int>;
int solve(std::vector<int>v){
  auto midpoint = floor(v.size()/2);
  std::cout << "midpoint "<< midpoint << '\n';
  auto left_sum = std::accumulate(v.begin(), v.begin()+midpoint, 0);
  auto right_sum = std::accumulate(v.begin()+midpoint+1, v.end(), 0);
  std::map<int, bool> cache;
  for(size_t s = 0; s < v.size(); ++s){
     cache[s] = false;
  }
  while(midpoint > 0 && midpoint < v.size()-1 && left_sum != right_sum){
     std::cout << "left "<< left_sum  << " right " << right_sum << " mid "<< midpoint<< '\n';
    if(cache[midpoint] == true) break;
     if(left_sum > right_sum){
             std::cout << v[midpoint] << '\n'; 
         right_sum += v[midpoint];
         left_sum -= v[midpoint];
         cache[midpoint] = true;
         --midpoint;
     }else if(left_sum < right_sum){
             std::cout << v[midpoint] << '\n'; 
        right_sum -= v[midpoint];
         left_sum += v[midpoint];
         cache[midpoint] = true;
         ++midpoint;
     }else{
         break;
     }
     //std::cout << "left "<< left_sum  << " right " << right_sum << " mid "<< midpoint<< '\n';
  }
  if(left_sum == right_sum) return midpoint;
  else return -1;
}


int main(){
    std::cout << solve(vec({1,2,3,5,3,2,1})) << '\n';
    std::cout << solve(vec({1,12,3,3,6,3,1})) << '\n';
    std::cout << solve(vec({10,20,30,40})) << '\n';
    std::cout << solve(vec({1,5,10,9,6,10,5,4,9,1,2,7,8,1,8,3,3,1,9,8,10,5,8,5,6,7,1,6,7,7,5,7,4,6,2,7,13,7,3,3,10,3,10,6,10,11,4,14,8,12,10,6,1,5,14,4,13,12,4})) << '\n';
    std::cout << solve(vec({3,4,5,9,7,10,9,4,6,3,8,5,6,5,2,9,1,3,5,1,1,4,4,5,3,1,4,8,4,7,4,6,1,10,4,7,9,5,2,4,9,1,1,6,5,2,5,1,9,11,13,11,14,8,5,4,10,6,2,5,11,12,11,12,8,3,3,10,6,15,15,1,12,10})) << '\n';
}
