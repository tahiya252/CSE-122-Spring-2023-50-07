//Problem name-Bit++
//problem no-282A

#include <iostream>
using namespace std;
int main()
{
    int a,i,x=0;
    string s;
    cin>>a;
    for (i=0;i<a;i++)
    {
        cin>>s;
        if (s[i]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }

    }
    cout<<x<<endl;
    return 0;
}
