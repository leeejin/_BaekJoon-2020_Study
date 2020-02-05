#include <iostream>
#include <string>
using namespace std;
string a(int P,string word)
{
	string end = "";
	for(int i =0; i<word.length(); i++) //word.length() : 문자열 길이 
	{
		for( int j =0; j<P; j++)
		{
			end += word[i];
		}
	}
	return end;
}
int main()
{
	int T;
	cin>>T;
	int P;
	string word;
	for(int i=0; i<T; i++)
	{
		cin>>P>>word;
		cout<<a(P,word)<<endl;
	}
	return 0;
}