#include <iostream>

using namespace std;

bool getPrime(int x)
{
    for(int i = 2; i < 1000000;i++)
    {
        if(x%i==0&&x!=i)  //Added the condition since prime numbers can be divided by itself
            return 0;
    }
    return 1;
}

int main()
 {
	int test,num;
	cout<<"Enter number of test cases : ";  //Test cases are positive and limited to 100
	cin>>test;
	while(test>0&&test<101)
    {
        cout<<"\n\nEnter the number : ";
        cin>>num;
        for(int a = 2;a<num;a++)
        {
            if(getPrime(a)==1&&getPrime(num-a)==1)  //Initially tried a new method for larger number before and it complicated the code
            {
                cout<<"\n"<<a<<"   "<<(num-a);
                break;
            }
        }
        test--;
    }
	return 0;
}
