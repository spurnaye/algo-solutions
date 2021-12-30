#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

std::vector <int> Pendulum (std::vector <int> values)
{
    std::vector<int> output = values;
    auto size = values.size();
    std::sort(values.begin(), values.end());
    size_t mid = (size-1)/2;
    size_t j = 1, i = 1;
    output[mid] = values[0];
    for (i = 1; i <= mid; i++)
    {
        output[mid+i] = values[j++];
        output[mid-i] = values[j++];
    }
     if (size%2 == 0)
        output[mid+i] = values[j];
    
    return output;
}

int main(){
    auto output = Pendulum(std::vector<int>({ 10, 4, 9}));
}
