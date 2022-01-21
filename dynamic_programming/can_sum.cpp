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
using vec_vec_ints   = std::vector<vec_ints>;

void print(const vec_vec_ints& v){
    std::cout << "[\n";
    for(const auto& row: v){
        std::cout << '[';
        for(const auto& el: row){
            std::cout << ' ' << el ;
        }
        std::cout << "]\n";
    }
    std::cout << "]\n";
}

bool can_sum(const vec_ints& input, int total){
    if(total == 0) return true;
    if(total < 0) return false;
    for(const auto& el: input){
        if(can_sum(input, total - el)){
            return true;
        }
    }
    return false;
}

int main()
{
     vec_ints temp{2,4};
     std::cout << "can sum " << can_sum(temp, 7) << '\n';
     //std::cout << "can sum " <<can_sum(temp, 10) << '\n';
     //std::cout << "can sum " <<can_sum(temp, 100) << '\n';
     //std::cout << "count ways for 4X4 maze " <<count_ways(4) << '\n';
    //std::cout << "count ways for 5X5 maze " <<count_ways(5) << '\n';
    // std::cout << "count ways for 10X10 maze " <<count_ways(10) << '\n';
}
