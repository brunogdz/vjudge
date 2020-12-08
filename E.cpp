#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int a, b, i;
	cin>>a>>b;
	int arr[a];
	for (i = 0; i < (a - 1); i++)
	{
		cin>>arr[i];
	}
	for (i = 0; i < (a - 1);)
	{
		i += arr[i];
		if (i==(b - 1))
			{
				cout<<"YES";
				return 0;
			}
	}
	cout<<"NO"<<endl;

}