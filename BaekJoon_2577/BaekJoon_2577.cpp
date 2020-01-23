#include <iostream>
using namespace std;
int main()
{
	int A,B,C;
	int D[10]={0};
	int count=0;
	cin>>A>>B>>C;
	count=A*B*C;
	while(count!=0)
	{
		D[count%10]+=1;
		count /=10;
	}
	for(int i=0; i<10;i++)
	{
		cout<<D[i]<<"\n";
	}
	return 0;
}