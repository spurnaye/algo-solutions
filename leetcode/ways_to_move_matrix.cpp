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

using vec_ints = std::vector<uint64_t>;
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

void ways_at_position(const vec_vec_ints& input, vec_vec_ints& output, vec_ints& temp, size_t n =0, size_t m = 0){
    if(n == input[0].size() || m == input[0].size()) return;
    temp.push_back(input[n][m]);
    if(n == input[0].size()-1 && m == input[0].size()-1) {
        output.push_back(temp);
    };
    ways_at_position(input, output, temp, n+1, m);
    ways_at_position(input, output, temp, n, m+1);
    temp.pop_back();
}

void fill_grid(vec_vec_ints& grid){
    int init = 0;
    for(auto& row: grid){
        std::generate(row.begin(), row.end(), [&init]{return ++init;});
    }
}

void fill_tables(vec_vec_ints& grid){
    for(size_t i = 1; i <= grid[0].size(); ++i){ 
        for(size_t j = 1; j <= grid[0].size(); ++j){
            grid[i-1][j-1] = i*j;
        }
    }
}

int main()
{
     int n = 4;
     vec_vec_ints maze(n, vec_ints(n, 0));
     fill_grid(maze);
     std::cout << "input is \n";
     print(maze);

     vec_ints temp;
     vec_vec_ints output;
     ways_at_position(maze, output, temp);
     std::cout << "The number of ways to nagivate through " << n << 'X'<< n << " maze :"<< output.size() << '\n';
     print(output);

     //std::cout << "count ways for 3X3 maze " <<ways_at_position(3) << '\n';
     //std::cout << "count ways for 4X4 maze " <<count_ways(4) << '\n';
    //std::cout << "count ways for 5X5 maze " <<count_ways(5) << '\n';
    // std::cout << "count ways for 10X10 maze " <<count_ways(10) << '\n';
}
