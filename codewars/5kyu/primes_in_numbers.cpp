#include <cmath>

class PrimeDecomp
{
public:
    static bool is_prime(int n) {
      if (n == 2) return true;
      bool prime = true;
      for(int i = 2; i <= std::ceil(std::sqrt(n)); ++i){
        prime &= (n % i != 0);
        if(!prime) break;
      }
      return prime;
    }
    static std::string factors(int lst){
      std::vector<int> factors;
      for(int i = 2; i <= std::ceil(std::sqrt(lst)); ++i){
          if(is_prime(i)){
             while(lst && lst % i == 0){
                factors.push_back(i);
               lst = lst / i;
               if(is_prime(lst)) {
                   factors.push_back(lst);
                   break;
                }
           }
           if(lst == 0) break;
          }
      }
      
      if(factors.size() == 0){
          factors.push_back(lst);
       }
       
      
      std::string output;
      std::map<int, int> cache;
      if(factors.size() > 0){
          int last_seen = -1;
          for(size_t i = 0; i < factors.size(); ++i){
              if(last_seen == -1) last_seen = factors[i];
              int count = 0;
              
              while(last_seen == factors[i]){
                  ++i;
                  ++count;
              }
             cache[last_seen] = count;
             last_seen = -1;
             --i;
          }
      }
      
      for(auto& el: cache){
          if(el.second == 1){
            output += "(" + std::to_string(el.first) + ")";
          }else{
            output += "(" + std::to_string(el.first) + "**" + std::to_string(el.second) + ")";  
          }
          
      }
      return output;
    }
};

int main(){
}
