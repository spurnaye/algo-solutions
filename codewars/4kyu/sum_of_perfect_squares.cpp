#include <cmath>
#include <climits>

bool isSquare(int x)
{
    int sqRoot = sqrt(x);
    return (sqRoot * sqRoot == x);
}


int sum_of_squares(int n) {
   if (isSquare(n)) {
        return 1;
    }
  
   for (int i = 1; i <= std::ceil(std::sqrt(n)); i++) {
        if (isSquare(n - (i * i))) {
            return 2;
        }
    }

    while (n % 4 == 0) {
        n >>= 2;
    }
    if (n % 8 == 7) {
        return 4;
    }

    return 3;
}
int main(){
}
