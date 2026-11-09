#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;


int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    ifstream file("input.txt");
    cin.rdbuf(file.rdbuf());
    
    long long div_mul;
    cin >> div_mul;

    for (int div = 2; div < sqrt(div_mul); div++)
    {
        for (int div_sqrt = 2, mul = div; div_sqrt < div; div_sqrt++)
        {
            if (div % div_sqrt != 0) continue;
            mul *= div_sqrt;
            if (mul == div_mul)
            {
                cout << div;
                return 0;
            }
            else if (mul > div_mul) break;
        }
    }
}