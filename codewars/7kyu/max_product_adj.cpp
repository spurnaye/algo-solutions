#include <vector>
#include <iostream>
#include <algorithm>

int adjacentElementsProduct(std::vector<int> inputArray) 
  {
          int maxProd = 0;
          for(auto it = inputArray.begin(); it != inputArray.end()-1;++it){
              maxProd = std::max(maxProd, (*it * *(it+1)));
          }
          return maxProd ;
  }


int main(){
    std::cout << adjacentElementsProduct({1,2,3}) << '\n';
}
