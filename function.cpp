#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int n)
{
   for(int i=2;i<n;i++)
   {
      if(n%i==0)
      {
         return false;
      }
   }
   return true;
}
int main()
{
   int n;
  cout<<"Enter a positive integer:";
  cin>>n;
  for(int i=2;i<n;i++)
  {
     int a,b;
     if(isprime(i))
     {
        a=i;
        if(isprime(n-a))
        {
           b=n-a;
           if(b>=a)

           cout<<n<<" = "<<a<<"+"<<b<<endl;
        }
     }
  }
  return 0;
}
