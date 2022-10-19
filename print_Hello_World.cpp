#include<iostraem>
using namewspace std;
int add(int x,int y)
{
  return x+y;
}
int sub(int x,int y)
{
  return x-y;
}
int mul(int x,int y)
{
  return x*y;
}
int div(int x,int y)
{
  return x/y;
}

int power(int x, int y)
{
  return pow(x,y);
}


int main()
{
cout<<"Hello World !"<<endl;
// this is your first changes after creating your file
// this is your second changes after creating your file
printf("Hello World in C and c++");
int n;
cin>>n;
cout<<"you typed "<<n<<endl;
int m;
cin>>m;
  cout<<add(n,m);
  cout<<sub(n,m);
  cout<<mul(n,m);
  cout<<div(n,m);
return 0;
}
