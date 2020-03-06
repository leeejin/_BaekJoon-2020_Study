#include <iostream>
using namespace std;
int main()
{
	int sang,jung,ha;
	int coke,cider;
	cin>>sang>>jung>>ha;
	cin>>coke>>cider;
	int min_burger,min_beverage;
	if(sang>jung)
	{
		if(jung>ha)
			min_burger = ha;
		else
			min_burger = jung;
	}
	else
	{
		if(sang>ha)
			min_burger = ha;
		else
			min_burger = sang;
	}
	if(cider>coke)
		min_beverage = coke;
	else
		min_beverage = cider;
	
	int set = min_burger + min_beverage -50;
	cout<<set<<"\n";
	return 0;
}