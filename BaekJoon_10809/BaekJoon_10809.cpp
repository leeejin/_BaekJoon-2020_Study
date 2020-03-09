#include <iostream>
#include <string>
using namespace std;
int main()
{
	string alphabet;
	cin>>alphabet;
	int index;
		for(char j ='a'; j<='z'; j++)
		{
			index = alphabet.find(j);
			cout<<index<<" ";
		}
		return 0;
	/*	find 함수 : String 클래스의 함수로서 특정 문자열을 찾고, 그 시작 위치를 반환

find(문자) : 인덱스 0부터 해당 문자를 찾고, 시작 위치를 반환한다.

find(문자열) : 인덱스 0부터 해당 문자열을 찾고, 그 시작 위치를 반환한다.

find(문자열, 시작위치) : 시작위치부터 문자열을 찾고, 시작위치를 반환한다.
*/
}
