#include <string>
#include <algorithm>
#include <iostream>

using namespace std; 

string specialNumber (int number)
{
    std::string num = std::to_string(number);
    bool output = std::all_of(num.begin(), num.end(), [](const char c){ return ((c - '0') <= 5);});
    return output ? "Special!!" : "NOT!!"; 
}

int main(){
    std::cout << specialNumber(12345) << '\n';
}
