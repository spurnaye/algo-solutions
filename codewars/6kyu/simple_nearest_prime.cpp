#include <cmath>

long long nextPrime(long long n, bool smaller = false){
    if(n < 2){return 2;}
    if(n == 2){return 3;}
    while(n){
        bool isPrime = true;
        for(int i = 2; i <= std::ceil(std::sqrt(n));++i){
            isPrime &= (n%i != 0);
            if(!isPrime) break;
        }
        if(isPrime) break;
        if(smaller) --n; 
        else ++n;
    }
  return n;
}

long long solve(long long n){
    long long prev = nextPrime(n, true);
    long long next = nextPrime(n);
    return (n - prev <= next - n) ?  prev : next;
}

int main(){}
