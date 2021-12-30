#include <iostream>
int Add (int x, int y)
{
  if (y == 0)
        return x;
    else
        return Add( x ^ y,static_cast<unsigned>(x & y) << 1);
}


int main(){
    std::cout << Add(1,2) << '\n';
}
