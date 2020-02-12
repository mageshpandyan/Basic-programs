#include <iostream>

using std::cin;
using std::cout;

int getLength(int x, int &length)
{
    while(x)
    {
        x /= 10;
        length++;
    }
    return 0;
}

int Armstrong(int number, int length, int &finale)
{
    int dividend, remainder;
    for(int i = length; i > 0; i--)
    {
        dividend = number % 10;
        remainder = dividend;

        for(int j = length; j > 1; j--)
            remainder = (remainder * dividend);

        finale += remainder;
        number /= 10;
    }
    return 0;
}

int main()
{
    int num,len=0,result=0;
    cout << "\t\t\tArmstrong Number\n\n\nEnter a number : ";
    cin>>num;

    getLength(num,len);

    Armstrong(num,len,result);

    cout<<"\n\nThe Armstrong value is : "<<result;
    if(num == result)
        cout<<"\n\nThus the number is an Armstrong number";
    else
        cout<<"\n\nThus the number is NOT an Armstrong number";
    return 0;
}
