#include <vector>
#include <set>

class Kata {
  public:
    int countInversions(const std::vector<int>& arr) {
        if(arr.size() == 0) return 0;
        std::multiset<int> set1;
        set1.insert(arr[0]);
        int invcount = 0;
  
        std::multiset<int>::iterator itset1; 
  
        for (size_t i=1; i<arr.size(); i++)
        {
            set1.insert(arr[i]);
            itset1 = set1.upper_bound(arr[i]);
            invcount += distance(itset1, set1.end());
        }
  
    return invcount;
    }
};

int main(){
}
