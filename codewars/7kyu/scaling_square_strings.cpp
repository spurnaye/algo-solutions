#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <regex>
#include <iterator>
#include <numeric>

class ScalingSqStrings
{
public:
    static std::string scale(const std::string &str, int horizontal, int vertical){
        if(str.empty()) return str;
        std::vector<std::string> temp;
        const std::string separator = "\n";
        std::regex regexz(separator);
        std::string s;
        std::vector<std::string> input_list(std::sregex_token_iterator(str.begin(), str.end(), regexz, -1),
                                            std::sregex_token_iterator());
        for(const auto& input_str: input_list){
            s.reserve(input_str.length()*horizontal);
            for(const char& c: input_str){
                for(int i = 0; i < horizontal; ++i){
                    s += c;
                }
            }
            for(int i = 0; i < vertical; ++i){
                temp.push_back(s);
            }
            s.clear();
        }
        std::string output  = std::accumulate(temp.begin(), temp.end(), std::string(),
                        [&separator](const auto& init, const auto& el){
                           return init  + (init.length() > 0 ? separator : "") + el; 
                        });
        return output;
    }
};

int main(){
        std::cout << ScalingSqStrings::scale("abcd\nefgh\nijkl\nmnop", 2,4) << '\n';
}
