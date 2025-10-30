#include<iostream>
using namespace std;
int main()
{
	int day;
	cout<<"enter the day =";
	cin>>day;
	switch (day)
	{
	case 1: cout<<"this is monday";break;
	case 2: cout<<"this is tuesday";break;
	case 3: cout<<"this is wednesday";break;
	case 4: cout<<"this is thursday";break;
	case 5:cout<<"this is friday";break;
	case 6: cout<<"this is saturday";break;
	case 7: cout<<"this is sunday";break;
	default: cout<<"you enter a wrong digit";break;
}
	return 0;
	}