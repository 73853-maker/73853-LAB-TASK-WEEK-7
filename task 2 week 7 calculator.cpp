#include<iostream>
using namespace std;
int main()
{
   float num1 , num2;
   char op;
   cout<<"enter the first number =";
   cin>>num1;
   cout<<"enter the operator (+,-,*,/ )" ;
   cin>>op;
   cout<<"enter the second number =";
   cin>>num2;
   switch(op)
   {
   	case'+': cout<<"enter the result "<<num1+num2;break;
   	case'-': cout<<"enter the result "<<num1-num2;break;
   	case'*': cout<<"enter the result "<<num1*num2;break;
   	case'/': cout<<"enter the result "<<num1/num2;break;
   	default: cout<<"you eneter wrong digit! ";
   }
   return 0;
}