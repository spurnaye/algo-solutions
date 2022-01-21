#include <vector>

using vec_ints = std::vector<int>;
using vec_vec = std::vector<vec_ints>;

vec_vec multiplication_table(int n){
   vec_vec output(n, vec_ints(n, 0));
    for(size_t i = 0; i < n; ++i){
        for(size_t j = 0; j < n; ++j){
           output[i][j] = (i+1)*(j+1);
        }
    }
  return output;
}

int main(){
}
