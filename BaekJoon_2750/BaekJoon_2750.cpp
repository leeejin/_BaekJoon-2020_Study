#include <iostream>
using namespace std; 
int main() 
{ 
	int n,temp;
	cin>>n;
	int s[n];
	for(int i=0; i<n; i++)
	{
		cin>>s[i];
	}
	for(int j=0; j<n-1; j++)
	{
		for(int k= j+1; k<n; k++)
		{
		if(s[j]>s[k])
		{
			temp = s[k];
			s[k] = s[j];
			s[j] = temp;
		}
		}
	}
	for(int l = 0; l<n; l++)
	{
		cout<<s[l]<<"\n";
	}
	return 0;
}