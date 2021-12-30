#include <vector>
#include <numeric>

/*
 *
 * Task
Given an array/list [] of integers , Construct a product array Of same size Such That prod[i] is equal to The Product of all the elements of Arr[] except Arr[i].

Notes
Array/list size is at least 2 .

Array/list's numbers Will be only Positives

Repetition of numbers in the array/list could occur.

Input >> Output Examples
productArray ({12,20}) ==>  return {20,12}
Explanation:
The first element in prod [] array 12 is the product of all array's elements except the first element

The second element 20 is the product of all array's elements except the second element .

productArray ({1,5,2}) ==> return {10,2,5}
*/
std::vector <int> productArray (std::vector <int> numbers)
{
    int total = std::accumulate(numbers.begin(), numbers.end(), 1, std::multiplies<int>());
    for(auto& el: numbers) el = total/el;
    return numbers;
}

int main(){

}
