unsigned int countBits(unsigned long long n){
  unsigned int bits = 0;
  while(n){
    bits += n & 1;
    n >>= 1;
  }
  return bits;
}

int main(){

}
