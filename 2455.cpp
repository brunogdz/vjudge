/*
solution 1933 - Tri-du URI ONLINE JUDGE
*/


#include <iostream>
 
using namespace std;
 
int main()
{
    int P_1, P_2, C_1, C_2, A, B;
    cin >> P_1 >> C_1 >> P_2 >> C_2;
    A = P_1 * C_1;
    B = P_2 * C_2;
    if(A < B){
        cout << 1 << endl;
    }
    if(B < A){
        cout << -1 << endl;
    }
    if(A == B){
        cout << 0 << endl;
    }
}