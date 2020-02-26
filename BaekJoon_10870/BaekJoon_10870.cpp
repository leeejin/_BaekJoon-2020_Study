#include <iostream>
using namespace std;
int Fn(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return Fn(n-1)+Fn(n-2);
}
int main()
{
	int n;
	if(n<=20 ||n>=0)
	{
		cin>>n;
		cout<<Fn(n);
	}
	return 0;
}