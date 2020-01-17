#include <iostream>
using namespace std;
int main()
{
	int ch[9];
	int max,i=0;
	max= ch[0];
	int count =0;
	for(i=0; i<9; i++)
	{
		cin>>ch[i];
		if(ch[i]<100 && ch[i]>0)
		{
		if(max<ch[i])
		{
		max = ch[i];
		count = i+1;
		}
		}
	}
	cout<<max<<"\n"<<count<<"\n";
}