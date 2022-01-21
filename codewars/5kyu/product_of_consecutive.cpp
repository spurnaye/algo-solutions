#include <vector>
typedef unsigned long long ull;
using vec_ull = std::vector<ull>;
class ProdFib
{
public:
  
  static vec_ull productFib(ull prod){
    vec_ull cache{0,1};
    ull a, b, product;
    do {
       cache.push_back(*cache.rbegin() + *(cache.rbegin()+1));
       a = *cache.rbegin();
       b = *(cache.rbegin()+1);
       product = a*b;
   }while(product < prod);
   vec_ull output {b, a, static_cast<ull>(product <= prod)};
   return output;
}

};

int main(){
}
