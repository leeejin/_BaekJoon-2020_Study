#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n>=1 &&n<=100)
	{
		for(int i=1; i<=n; i++)
		{
			for(int z=n; z>i;z--)
			cout<<" ";
			for(int j=1;j<=i;j++)
			cout<<"*";
			cout<<endl;
		}
	}
}