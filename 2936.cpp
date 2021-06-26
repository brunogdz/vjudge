/*
solution 2936 - Quanta Mandioca? URI ONLINE JUDGE
*/

#include <iostream>
 
using namespace std;
 
int main()
{
    int P[5] = {300, 1500, 600, 1000, 150};
    int i = 0, c,t = 0;
    while(i<5){
        cin >> c;
        t = t + (P[i] * c);
        i++;
    }
    t = t + 225;
    std::cout << t << std::endl;
    return 0;
}