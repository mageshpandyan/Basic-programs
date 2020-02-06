#include <iostream>

using namespace std;

unsigned long long int Euler(unsigned long long int x)
{
    unsigned long long int temp=0;
    for(unsigned long long int i=1; i<x; i++)
    {
        if(x%i==0)
        {
            temp+=i;
        }
    }
    return temp;
}

int main()
{
    unsigned long long int a,b;
    cout<<"\t\t\t\tAmicable Numbers\n\n";
    cout<<"\tCheck whether the two given numbers are amicable numbers or not\n\n";
    cout<<"Enter the two numbers : ";
    cin>>a>>b;
    if((Euler(a)==b)&&(Euler(b)==a))
        cout<<"\n\nThe given numbers are Amicable numbers";
    else
        cout<<"\n\nThe given numbers are not Amicable";
    return 0;
}
