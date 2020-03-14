#include<iostream>
using namespace std;
int main()
{
  int z=1,q=2;
  for (int i=0; i<4; i++)
  {
    for (int j=4; j>i; j--)
    {
      cout<<" ";
    }
    cout<<"1";
    if (i!=0)
    {
      for (int k=1; k<=z; k++)
      {
        cout<<" ";
      }
      cout<<q;
      z+=2;
      q=q+1;
    }
    cout<<endl;  // endl is for new line
  }
 int w=1;
  for (int i=1; i<=z+2; i++)
  {
      if(i%2==0){
          cout<<" ";
      }
      else{
    cout<<w;
    w++;
      }
  }
return 0;
}
