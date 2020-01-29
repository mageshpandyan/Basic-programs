#include <iostream>

using namespace std;

void rev(string &s1,int x, int y)
{
    while(x<y)
    {
        swap(s1[x],s1[y]);
        x++;
        y--;
    }
}

int main()
{
    string str;
    int a1,a2,i,j,k;
    k=0;
    cout << "Enter string to be reversed : ";
    cin>>str;
    a1=str.length();
    a2=a1-1;
    for(i = 0;i < a1;i++)
    {
        if(str[i]=='.')
        {
            j=i-1;
            rev(str,k,j);
            k=i+1;
            j=0;
        }
    }
    rev(str,k,a2);
    rev(str,0,a2);
    cout<<"\nReversed strings with words intact : "<<str;
    return 0;
}
