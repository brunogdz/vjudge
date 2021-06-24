/*
solution 1866 URI ONLINE JUDGE
*/

#include <iostream>
using namespace std;

int main()
{

    int C;
    int N;
    cin >> C;
    int v[C];
    int i;
    for (i = 0; i < C; i++)
    {
        cin >> N;
        if (C >= 1 && C <= 1000)
        {
            if (N % 2 == 1)
            {
                v[i] = 1;
            }
            else
            {
                v[i] = 0;
            }
        }
    }
    for (i = 0; i < C; i++)
    {
        cout << v[i] << "\n";
    }
}