#include <iostream>
#include <algorithm>

class Printer
{
public:
    static std::string printerError(const std::string &s){
      std::string output;
      std::cout << s.length()<< '\n';
      auto cnt = std::count_if(s.begin(), s.end(), [](auto& c){
                           uint64_t cint = static_cast<uint64_t>(c);
                           return cint > m;});
      output += std::to_string(cnt);
      output += '/';
      output += std::to_string(s.length());
      return output;
    }
private:
     static constexpr uint64_t m = static_cast<uint64_t>('m');
};


int main(){
    Printer::printerError("aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyz");
};
