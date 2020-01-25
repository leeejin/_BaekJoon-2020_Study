#include <iostream>
using namespace std;
int main(void)
{
	int N;
	float sum =0;
	cin>>N;
	float score[1000];
	if(N<=1000)
	{
	for(int i=0; i<N;i++)
	{
		cin>>score[i];
	}
	float M=0;
	for(int i=0; i<N; i++)
	{
		if(score[i]>M) 
			M = score[i];
	}
	for(int i=0; i<N; i++)
	{
		score[i] = score[i]/M*100 ;
	}
	for(int i=0; i<N; i++)
	{
		sum += score[i];
	}
	}
	cout<<sum /(float)N<<"\n";
	return 0;
}