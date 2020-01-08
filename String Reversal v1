#include <iostream>

using namespace std;

int main()
{
    string str;
    int a1,a2,l;
    l=0;
    cout << "Enter string : ";
    cin>>str;
    a1=str.length();
    a2=a1;
    for(int i = 0;i < a2;i++)
    {
        swap(str[i],str[a2 - 1]);
        a2--;
    }
    cout<<"\nIntermediary : "<<str;
    for(int j=0;j<a1;j++)
    {
        if(str[j]=='.')
        {
            int k = j;
            for(;l<k;l++)
            {
                if(str[l]=='.')
                    continue;
                swap(str[l],str[k-1]);
                k--;
            }
            l=j;
        }
    }
    for(int d=a1;d>l;d--)
    {
        l++;
        swap(str[l],str[d-1]);
    }
    cout<<"\nReversed string : "<<str;
    return 0;
}
