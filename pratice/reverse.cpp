#include<iostream>
using namespace std;

int main()
{
  cout<<"Enter the String";
  string name;
  cin>>name;

  int n=name.length();
  for(int i=n; i>=0; i++)
    {
        cout<<name[i];
    }

  return 0;

}
