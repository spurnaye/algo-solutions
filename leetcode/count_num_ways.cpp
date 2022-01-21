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
        std::cout << ']';
    }
    std::cout << "]\n";
}
void ways_at_position(vec_vec_ints& v, int n, int m){
    if(v[n][m] > 0) return;
    if(n == 0 && m == 0){
        v[n][m] = 1;
    }else if (n == 0 and m > 0){
        ways_at_position(v, n, m-1);
        v[n][m] = v[n][m-1];
    } else if (m == 0 and n > 0){
        ways_at_position(v, n-1, m);
        v[n][m] = v[n-1][m];
    }else{
        ways_at_position(v, n-1, m);
        ways_at_position(v, n, m-1);
        v[n][m] =  v[n][m-1] + v[n-1][m];
    }
}
uint64_t count_ways(int n){
    vec_vec_ints maze(n, vec_ints(n, 0));
    ways_at_position(maze, n-1, n-1);
    return maze[n-1][n-1];
}

int main()
{
     std::cout << "count ways for 3X3 maze " <<count_ways(3) << '\n';
     std::cout << "count ways for 3X3 maze " <<count_ways(4) << '\n';
    //std::cout << "count ways for 5X5 maze " <<count_ways(5) << '\n';
     std::cout << "count ways for 10X10 maze " <<count_ways(10) << '\n';
    std::cout << "count ways for 100X100 maze " <<count_ways(50) << '\n';
}
