bool isPrime(int num) {
   if (num < 2) return false;
   bool prime = true;
   for(int i = 2; i <= std::sqrt(num); ++i){
     prime &= (num != i && num % i != 0);
     if(!prime){
         break;
     } 
   }
  return prime;
}

int main(){
}
