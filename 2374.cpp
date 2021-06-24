/*
solution 2374 URI ONLINE JUDGE
*/

#include <iostream>
using namespace std;

int main()
{

    int N, M;
    cin >> N;
    if (N >= 1 && N <= 40)
    {

        cin >> M;
        if (M >= 1 && M <= 40)
        {
            cout << N - M;
        }
    }

    return 0;
}