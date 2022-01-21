#include <vector>
#include <array>

std::array<int, 2> two_oldest_ages(std::vector<int> ages)
{
    std::sort(ages.begin(), ages.end());
    return {*(ages.end()-2),ages.back()};
}

int main(){
}
