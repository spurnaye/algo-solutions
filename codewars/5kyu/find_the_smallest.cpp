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

using ll = long long;
using vec_long = std::vector<ll>;

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

void print(const vec_long& v){
        std::cout << '[';
        for(const auto& el: v){
            std::cout << ' ' << el ;
        }
        std::cout << "]\n";
}

vec_long smallest(ll input)
{
    vec_ints temp;
    ll orig = input;
    std::string input_str = std::to_string(input);
    std::map<ll, std::vector<ll>> cache;
    for(size_t i = 0; i < input_str.size(); i++){
        for(size_t j = 0; j < input_str.size(); j++){
            char c_j = input_str[i];
            input_str.erase(i,1);
            input_str.insert(j, std::to_string(c_j-'0'));
            //std::cout << input_str  << " i "<< i << " j "<< j << '\n';
            ll num = stoll(input_str);
            if(cache.find(num) == cache.end()){
                cache[num] = {static_cast<ll>(i),static_cast<ll>(j)};
            }
            input_str = std::to_string(input);
        }
    }
    auto min_el = std::min_element(cache.begin(), cache.end());
    std::vector<ll> output;
    output.push_back(min_el->first);
    output.push_back(min_el->second[0]);
    output.push_back(min_el->second[1]);
    return output;

}

int main()
{
     auto output = smallest(261235);
     print(output);  
}
