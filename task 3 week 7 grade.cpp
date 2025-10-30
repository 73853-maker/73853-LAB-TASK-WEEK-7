#include<iostream>
using namespace std;
int main()
{
	char grade;
	cout<<"enter the grade=";
	cin>>grade;
	switch(grade)
	{
	case '1': cout<<"grade A";break;
	case '2':cout<<"grade B";break;
	case '3':cout<<"grade C";break;
	case '4':cout<<"grade D";break;
	default:cout<<"you are fail";break;
}
return 0;
}