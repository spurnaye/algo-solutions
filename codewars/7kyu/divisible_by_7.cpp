#include <iostream>

class DivSeven
{
public:
    static std::pair <long long, long long> seven(long long m){
            std::pair<long long, long long> output;
            std::cout << " m " << m << '\n';
            long long last_digit = 0;
            long long steps = 0;
            while(m > 99){
                last_digit = m % 10;
                m /= 10;
                if(((m - last_digit*2) % 7) == 0){
                    m = m - last_digit*2;
                }
                ++steps;
            }
            output.first = m;
            output.second = steps;
            return output;
    };
};


int main(){
    auto output = DivSeven::seven(371);
    std::cout << "first " << output.first << " second "<< output.second << '\n';
    output = DivSeven::seven(1603);
    std::cout << "first " << output.first << " second "<< output.second << '\n';
    output = DivSeven::seven(477557101);
    std::cout << "first " << output.first << " second "<< output.second << '\n';
    output = DivSeven::seven(46440694);
    std::cout << "first " << output.first << " second "<< output.second << '\n';
}

