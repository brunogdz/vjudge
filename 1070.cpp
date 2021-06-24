/*
Solution 1070 - Seis Números Ímpares
*/

// Example program

#include <iostream>
using namespace std;

int main()
{
    int X;
    cin >> X;
    int i = X;
	int cont =0;
	while(cont<6)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
			cont++;	
		}
		i++;
	}
}
