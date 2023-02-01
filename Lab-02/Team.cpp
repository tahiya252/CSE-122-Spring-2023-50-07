//Problem name-Team
//Problem no-231A

#include <iostream>
using namespace std;
int main()
{
    int x,y,z=0,num;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>x>>y>>z;
        if ((x==1 && y==1) || (y==1 && z==1) || (x==1 && z==1))
        {
            z+=1;
        }
    }
    return 0;
}
