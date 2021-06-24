/*
Solution 1097 - Sequencia IJ 3
*/

#include <iostream>
using namespace std;

int main()
{
    int i = -1;
    int j = 5;
    int o;
    int k;
    while(i < 9){
        i = i + 2;
        j = j + 2;
        o = j;
        for(k = 0; k<3;k++){
            cout << "I=" << i << " J=" << j <<"\n";
            j = j -1;
        }
        j = o;

    }
}