#include<iostream>
using namespace std;
void countDigit()
{   int n;
    int count=0;
    cout<<"Enter a number to count digit"<<endl;
    cin>>n;
    while (n>0)
    {
       n=n/10;
       count++;
    }
    cout<<"number of digits is "<<count<<endl;    
}
int main()
{
    countDigit();
    return 0;
}      
