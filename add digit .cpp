/* C++ Program - Add Digits of Number */

#include<iostream>
using namespace std;
int main()
{
	int num, rem=0, sum=0;
	cout<<"Enter a Number :";
	cin>>num;
	int temp=num;
    while(num>0)
	{
		rem=num%10;
		sum=+rem;
		num=num/10;
	}
	cout<<"Sum of the digits of "<<temp<<" is "<<sum;
return 0;
}
