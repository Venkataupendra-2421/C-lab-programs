#include<iostream>
using namespace std;
void tables();
int main()
{
    tables();
    return 0;
}
void tables()
{
    int i,j,n;
    cout<<"\nEnter the Table number:";
    cin>>j;
    cout<<"\nEnter the limit:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"\n"<<i<<"*"<<j<<"="<<i*j;
    }
}
