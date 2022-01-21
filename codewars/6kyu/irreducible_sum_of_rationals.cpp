#include <utility>
#include <numeric>
using vec_vecs = std::vector<std::vector<int>>;
class SumFractions
{
public:
    static std::pair <int, int> sumFracts(vec_vecs &l){
       int product_denom = std::accumulate(l.begin(), l.end(), 1,
       [](int product, const auto & el){
           product *= el.back();
           return product;});
    
        int first = 0;
        for (auto& el: l){
            el[0] =  (el[0]*(product_denom) / el[1]);
            first += el[0];
        };

        int gcd =  std::gcd(product_denom, first);
        return {first/gcd, product_denom/gcd};
    }
};

int main(){
}
