#include <cmath>

long long nextPrime(long long n){
  if(n == 1) return 2;
  if(n == 2) return 3;
  while(++n){
    bool is_prime = true;
    for(int i =2; i <= std::ceil(std::sqrt(n)); ++i){
      is_prime &= n % i != 0;
      if(!is_prime) break;
    }
    if(is_prime) break;
  }
  return n;
}
std::string solve(int a, int b)
{
    std::string output;
    long long curr_prime = 1;
    while(output.size() < static_cast<size_t>(a + b)){
        curr_prime = nextPrime(curr_prime);
        output += std::to_string(curr_prime);
    }
    return output.substr(a,b);
}

int main(){
}
