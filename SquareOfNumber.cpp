#include <iostream>

using namespace std;

int square(int x)
{
    int sqnum=0,temp=1;
    for(int i=0;i<x;i++)
    {
        sqnum+=temp;
        temp+=2;
    }
    cout<<"\n"<<sqnum;
    return 0;
}

int main()
{
    int num;
    cout << "Enter the number to be squared : ";
    cin>>num;
    square(num);
    return 0;
}
