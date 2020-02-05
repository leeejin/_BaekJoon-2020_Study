#include <iostream>
using namespace std;
long cal(int n)
{
	if(n<=0) return 1;
	else
	return n * cal(n-1);
	
}
int main()
{
	int n;
	cin>>n;
	cout<<cal(n)<<endl;
}