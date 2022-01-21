#include <iostream>
#include <vector>
#include <typeinfo>
#include <map>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <utility>
#include <numeric>
#include <cmath>


using vec_ints = std::vector<int>;
using it = vec_ints::iterator;

void print(const vec_ints& to_print){
    std::cout << '[';
    for(auto& i: to_print){ std::cout << i << ' ';}
    std::cout << "]\n";
}

void merge(it start, it mid, it finish, int& num_inversions){
   vec_ints left;
   vec_ints right;

   std::copy(start, mid, std::back_inserter(left));
   std::copy(mid, finish, std::back_inserter(right));
    
   it left_begin = left.begin();
   it left_end = left.end();
   it right_begin = right.begin();
   it right_end = right.end();

   while(left_begin != left_end && right_begin != right_end){
       if(*left_begin <= *right_begin){
           *start = *left_begin;
           ++left_begin;
       }else{
           *start = *right_begin;
           ++right_begin;
           auto temp = left_begin;
           while(*temp > *mid){
               num_inversions++;
               ++temp;
           }
       }
       start++;
   }

   while(left_begin < left_end){
       *start = *left_begin;
       ++left_begin;
       ++start;
   }
   
   while(right_begin < right_end){
       *start = *right_begin;
       right_begin++;
       start++;
   }
}

void merge_sort(it start, it finish, int& num_inversions){
    auto size = std::distance(start, finish);
    if (size < 2)
        return;
    
    auto mid = std::next(start, size / 2);
    merge_sort(start, mid, num_inversions);
    merge_sort(mid, finish, num_inversions);
    merge(start, mid, finish, num_inversions);
}

int main()
{
   vec_ints input { 4,3,2,1};
   int num_inversions = 0;
   merge_sort(input.begin(), input.end(), num_inversions);
   std::cout << "num_inversions "<< num_inversions<< '\n';
   print(input);
}
