#include<iostram>
using namespace std;

int main()
{
  cout<<"enter the Name";
  string name;
  cin>>name;
   int cnt=0;
  int n=name.length();
  int m=n/2;
  for(int i=0, int j=m; i<m; i++, j++)
    {
        if(n%2==0)
        {
          if(name[i]!=name[j])
          {
            cnt++;
            break;
        }
    } else 
        {
            if(name[i]!=name[j+1])
            {
               cnt++;
              break;
            }
        }
}
  if(cnt==0)
  {
    cout<<"it is Palindrome String";
  } else {
    cout<<"Not Palindrome String ";
  }

}
