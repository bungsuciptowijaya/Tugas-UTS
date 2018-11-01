#include <iostream>

using namespace std;
int main()
{int N,X,T,Batas;
N = 9;
Batas = 9 + 100;
X = 20;
T = 9;
while( T <= Batas)
    {   T = T + X;
        X = X + 10;
    }
    cout << T;

}
