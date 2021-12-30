#include <cmath>
#include <iostream>

using namespace std; 

bool consecutiveDucks (unsigned int num)
{
    return  ((num&(num-1)) && num);
}

int main(){
    std::cout << consecutiveDucks(200) << '\n';
}
