#include <iostream>

using namespace std;

int roman(int x, int y)
{
    for(int z=0;z<y;z++)
    {
        cout<<x+1<<"\t";
        x+=y;
    }
    return 0;
}

int main()
{
    int a;
    cin>>a;
    for(int column = 0;column < a; column++)
    {
        roman(column,a);
        cout<<"\n";
    }
    return 0;
}
