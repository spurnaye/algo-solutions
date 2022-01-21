#include<vector>
#include <algorithm>
using ull = unsigned long long;
using vec_ull = std::vector<ull>;

 vec_ull partsSum(const vec_ull& ls){
   ull start = 0;
   vec_ull output {start};
    for(auto it = ls.rbegin(); it < ls.rend(); ++it){
        start += *it;
        output.push_back(start);
    }
   std::reverse(output.begin(), output.end());
   return output;
}

int main(){
}
