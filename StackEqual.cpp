/* This program takes three stacks with sizes n1,n2,n3 given as input, makes the sum of their elements to be equal by removing the
top-most element (since its a Stack). It can be treated as a game where the stacks are reduced such that they become equal at 
their maximum possible height.

Sample input : 
5  4  3

4  3  1  4  2
3  6  2  5
2  3  7

Output : 

7

*/

#include <iostream>

using std::cin;
using std::cout;

int getStackValues(int x[], int s1)
{
    for(int i = 0; i < s1; i++)
    {
        cin>>x[i];
    }
    return 0;
}

int addStacks(int x[], int s1, int &sum)
{
    int temp=0;
    for(int i = 0; i < s1; i++)
    {
        temp+=x[i];
    }
    sum=temp;
    return 0;
}

bool areStacksEqual(int d1, int d2, int d3)
{
    if((d1==d2)&&(d2==d3)&&(d1==d3))
        return 1;
    return 0;
}

int main()
{
    int size1,size2,size3,sum1=0,sum2=0,sum3=0;
    cout << "\t\t\tWelcome to the Application!!!!!\n";
    int a[10],b[10],c[10];
    cout<<"\n\nEnter the size of the 3 stacks : ";
    cin>>size1>>size2>>size3;

    //Loops begin

    cout<<"\n\nEnter the elements of first stack : ";
    getStackValues(a,size1);

    cout<<"\n\nEnter the elements of second stack : ";
    getStackValues(b,size2);

    cout<<"\n\nEnter the elements of third stack : ";
    getStackValues(c,size3);

    //Adding the Stacks

    addStacks(a,size1,sum1);
    addStacks(b,size2,sum2);
    addStacks(c,size3,sum3);

    //Used boolean function to make the while loop look simple

    while(areStacksEqual(sum1,sum2,sum3)==0)
    {
        if((sum1>sum2)&&(sum1>sum3))
        {
            size1--;
            for(int i = 0; i < size1; i++)
            {
                a[i] = a[i+1];
            }

            addStacks(a,size1,sum1);    //Since only one stack value is changed
        }
        else if((sum2>sum1)&&(sum2>sum3))
        {
            size2--;
            for(int i = 0; i < size2; i++)
            {
                b[i] = b[i+1];
            }
            addStacks(b,size2,sum2);
        }
        else
        {
            size3--;
            for(int i = 0; i < size3; i++)
            {
                c[i] = c[i+1];
            }
            addStacks(c,size3,sum3);
        }
    }
    cout<<"\n\n"<<sum1;
    return 0;
}
