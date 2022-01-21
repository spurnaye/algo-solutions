#include <unordered_map>
#include <list>
class DirReduction
{
public:
    static std::vector<std::string> dirReduc(std::vector<std::string> &arr){
        std::unordered_map<std::string, std::string> opposites= {{"NORTH","SOUTH"},{"SOUTH","NORTH"},{"EAST","WEST"},{"WEST","EAST"}};
        std::vector<std::string> output;
        for(const std::string& el: arr){
          if(!output.empty() and output.back() == opposites[el]){
                output.pop_back();
          }else{
            output.push_back(el);
          }
        }
      return output;
    }
};

int main(){}
