#include <cmath>
#include <iostream>

bool isPrime(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n)+1 ; ++i){
       if(n != i && n % i == 0) return false;
    }
    return true;
}

int nextPrime(int n) {
  while(!isPrime(++n));
  return n;
}

int main(){
   std::cout << nextPrime(0) << '\n';
   std::cout << isPrime(2) << '\n';
}
