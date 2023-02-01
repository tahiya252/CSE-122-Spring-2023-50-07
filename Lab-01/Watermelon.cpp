//Codeforce problem no-4A
//Problem name-Watermelon
#include <iostream>
using namespace std;
int main()
{
  int x;
  cout<<"Enter the weight of watermelon=";
  cin>>x;
  if (1<=x && x<=100){
    if (x%2==0){
        cout <<"Yes"<<endl;
    }
    else
    {

        cout<<"No"<<endl;
    }
  }
  else
  cout<<"Wrong Weight";
  return 0;
}
