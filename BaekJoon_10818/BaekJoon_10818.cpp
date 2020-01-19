#include <iostream>
using namespace std;
int main()
{
	int N,M=0;
	int ch[N];
	cin>>N;
	int max = -1000000;
	int min = 1000000;
	if(N>=1 && N<=1000000)
	{
	for(int i=0; i<N; i++)
	{
	cin>>M;
	if(max<M) max = M;
	if(min>M) min = M;
	}
	cout<<min<<" "<<max<<"\n";
	}
	return 0;
}