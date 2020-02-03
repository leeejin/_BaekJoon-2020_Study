#include <iostream>
using namespace std;
int main()
{
	int N,temp;
	cin>>N;
	char arr;
	int sum =0;
	cin.get(); //마지막 '\n'인 개행문자의 입력을 방지해주기 위한 것 
	for(int i =0; i<N; i++)
	{
		cin.get(arr);
		temp = arr - '0';
		sum += temp;
	}
	cout<<sum<<endl;
	return 0;
}