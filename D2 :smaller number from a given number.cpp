#include<iostream> 
using namespace std; 
int main() 
{ 
    int num1, num2; 
    cout << "Enter two numbers: "; 
    cin >> num1 >> num2; 
    if (num1 > num2) 
        cout << num2 << " is smaller than " << num1; 
    if (num1,num2<=0)
    	cout <<"invalid";
    else if (num1 < num2) 
        cout << num1 << " is smaller than " << num2; 
    else
        cout << "Both are equal"; 
    return 0; 
}
