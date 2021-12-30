#include <vector>
#include <iostream>
#include <algorithm>

/*
 *ask
Given an array of N integers, you have to find how many times you have to add up the smallest numbers in the array until their Sum becomes greater or equal to K.

Notes:
List size is at least 3.

All numbers will be positive.

Numbers could occur more than once , (Duplications may exist).

Threshold K will always be reachable.

Input >> Output Examples
minimumSteps({1, 10, 12, 9, 2, 3}, 6)  ==>  return (2)
 * */

int minimumSteps (std::vector <int> numbers ,  int input)
{
  std::sort(numbers.begin(), numbers.end());
  int count = 0;
  int total = 0;
  for(auto it = numbers.begin(); it != numbers.end(); ++it)
  {
    total += *it;
    if(total >= input) break;
    ++count;
     
  }
  return count;
}

int main(){
   minimumSteps(std::vector<int>({1,10,12,9,2,3}), 6);
}
