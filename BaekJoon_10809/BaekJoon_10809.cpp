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
	/*	find �Լ� : String Ŭ������ �Լ��μ� Ư�� ���ڿ��� ã��, �� ���� ��ġ�� ��ȯ

find(����) : �ε��� 0���� �ش� ���ڸ� ã��, ���� ��ġ�� ��ȯ�Ѵ�.

find(���ڿ�) : �ε��� 0���� �ش� ���ڿ��� ã��, �� ���� ��ġ�� ��ȯ�Ѵ�.

find(���ڿ�, ������ġ) : ������ġ���� ���ڿ��� ã��, ������ġ�� ��ȯ�Ѵ�.
*/
}
