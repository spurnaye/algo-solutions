#include <cmath>

std::vector<int> prime_factors(uint64_t n){
    std::vector<int> factors;
    while(n%2 ==0){
      factors.push_back(2);
      n = n/ 2;
    }
    
    for(uint64_t i = 3; i <= std::sqrt(n); i = i+2){
      while(n%i == 0){
        factors.push_back(i);
        n = n/i;
      }
    }
    
    if(n > 2){
      factors.push_back(n);
    }
    return factors;
}

std::string decomp(int n) {
    std::vector<int> fact;
    while(n){
        auto temp = prime_factors(n);
        std::copy(temp.begin(), temp.end(), std::back_inserter(fact));
        n--;
    }
    std::sort(fact.begin(), fact.end());
    
    std::string output;
    int last = -1;
    int count = 0;
    bool first = true;
    for(auto it = fact.begin(); it < fact.end();){
        if(last == -1) last = *it;
        while(last == *it){
            ++count;
            ++it;
        }
            if(!first) output += " * ";
            std::string temp_count = count > 1  ? '^' + std::to_string(count) : "";
            output += std::to_string(last) +temp_count; 
        
        last = -1;
        count = 0;
        first = false;
    }
    return output;
}

int main(){
}
