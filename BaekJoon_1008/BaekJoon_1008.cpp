#include <iostream>
using namespace std;
int main()
{
	double A,B;
	cin>>A>>B;
	if(A>0 && B>0 && A<10 && B<10)
	{
		cout.setf(ios::fixed);
		cout.precision(9);
		cout<<A/(double)B<<"\n";
	}
}