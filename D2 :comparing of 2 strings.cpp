#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[10],b[10];
	int i;
	cout<<"Enter 1st string:";
	cin>>a;
	cout<<"Enter 2nd string:";
	cin>>b;
	for(i=0;i<10;i++)
	{
		if(a[i]==b[i])
		{
			cout<<"Both strings are same.";
			break;
		}
		else
		{
			cout<<"Both strings are not same.";
			break;
		}
	}
	return 0;
}
