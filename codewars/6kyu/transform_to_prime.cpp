#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>

bool isPrime(uint64_t num){
  if(num <= 3) return true;
  bool isPrime = true;
  for(uint64_t i = 2; i < std::sqrt(num);++i){
      isPrime = isPrime & (num % i != 0);
  }
  return isPrime;
}
std::pair<uint64_t, uint64_t> nextPrime(uint64_t num){
   int64_t count = 0;
   while(++num){
     ++count;
     if(isPrime(num)){
         break;
     }
   }
   return std::make_pair(num, count);
}

int minimumNumber (std::vector <int> numbers )
{
  int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
  std::cout << "sum "<< sum << '\n';
  if(isPrime(sum)){
    return 0;
  }
  auto pair = nextPrime(sum);
  return pair.second;
}

int main(){
    std::cout << minimumNumber({2,12,8,4,6}) << '\n';
}
