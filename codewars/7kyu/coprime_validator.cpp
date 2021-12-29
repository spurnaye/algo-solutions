#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using vector_ints = std::vector<int>;
using vector_uints = std::vector<uint64_t>;

/*
 *Write a program to determine if the two given numbers are coprime. A pair of numbers are coprime if their greatest shared factor is 1.

The inputs will always be two positive integers between 2 and 99.

Examples
20 and 27:

Factors of 20: 1, 2, 4, 5, 10, 20
Factors of 27: 1, 3, 9, 27
Greatest shared factor: 1
Result: 20 and 27 are coprime
 * */

template <typename T>
void print(T & t){
    std::cout << t << '\n';
}
void print_vec(const vector_uints& v){
    std::cout << "[ ";
    for(const auto& x: v){
        std::cout << x << ' ';
    }
    std::cout << "] \n";
}

vector_uints get_factors(uint64_t input){
   vector_uints factors;
   for(uint64_t i = 1; i <= ceil(input/2); ++i){
           if(input % i == 0){
               factors.push_back(i);
               factors.push_back(input/i);
           }
   }

   std::sort(factors.begin(), factors.end());
   auto unique_idx = std::unique(factors.begin(), factors.end());
   factors.resize(std::distance(factors.begin(), unique_idx));
   return factors;
}

bool are_coprime(unsigned int a, unsigned int b){
        auto a_factors = get_factors(a);
        auto b_factors = get_factors(b);
        print_vec(a_factors);
        print_vec(b_factors);
        vector_uints common(a_factors.size() + b_factors.size());
        std::set_intersection(a_factors.begin(), a_factors.end(), b_factors.begin(), b_factors.end(), common.begin());
        auto last_index = std::remove_if(common.begin(), common.end(), [](const auto i){return i == 0;});
        common.resize(std::distance(common.begin(), last_index));
        print_vec(common);
        return common.size() == 1;
}

int main(){
  std::cout << are_coprime(20, 27) << '\n';
  std::cout << are_coprime(12, 39) << '\n';
  std::cout << are_coprime(67, 2) << '\n';
}
