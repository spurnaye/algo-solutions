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

int most_profit(vec_ints& quotes)
{
    int output = 0;
    for(auto start = quotes.begin(); start < quotes.end();){
        auto max_el = std::max_element(start, quotes.end());
        std::cout << "Max el "<< *max_el << '\n';
        for(auto it = start; it != max_el; ++it){
            output += (*max_el - *it) > 0 ? (*max_el - *it) : 0;
        }
        start = max_el+1;
    }
    return output;
}

int main()
{
     vec_ints temp{ 6, 5, 4, 3, 2, 1 };
     std::cout << "most_profit " << most_profit(temp) << '\n';

     temp = { 1, 2, 3, 4, 5, 6 };
     std::cout << "most_profit " << most_profit(temp) << '\n';

    temp = {1, 6, 5, 10, 8, 7 };
     std::cout << "most_profit " << most_profit(temp) << '\n';

     temp = { 1, 2, 10, 3, 2, 7, 3, 2};
     std::cout << "most_profit " << most_profit(temp) << '\n';
}
