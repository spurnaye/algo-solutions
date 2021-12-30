#include <vector>
#include <algorithm>
using namespace std ; 

vector <long long int> wheatFromChaff (vector <long long int> values)
{
  std::partition(values.begin(), values.end(), [](const int i){return i < 0;});
  return values;
}

int main(){
   wheatFromChaff(std::vector<int>({-5,-7,2,9}));
}
