#include <cmath>
#include <iostream>

int get_next_prime(int n){
    while(++n){
        bool prime = true;
        for(int i = 2; i <= std::sqrt(n); ++i){
            prime = prime & (n%i != 0);
        }
        if(prime) break;
    }
    return n;
}

unsigned long long numPrimorial (unsigned short int number )
{
    unsigned long long output = 1;
    int current_prime = 2;
    for(unsigned short int i = 0; i < number; ++i){
        output *= current_prime;
        current_prime = get_next_prime(current_prime);
    }
  return output;
}

int main(){
    std::cout << numPrimorial(2) << '\n'; 
}
