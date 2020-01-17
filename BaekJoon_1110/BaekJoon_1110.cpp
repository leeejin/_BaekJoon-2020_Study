#include <iostream>
using namespace std;
int main()
{
	int n,temp;
	int first,sec;
	int count =0;
	cin>>n;
	temp =n;
	while(1)
	{
		if(n>=0 && n<=99)
		{
			first = n/10;
			sec = n%10;
			n = sec * 10 +((first + sec)%10);
			count ++;
			if(n==temp)
			{
				cout<<count<<"\n";
				break;
			}
			
		}
	}
	return 0;
}