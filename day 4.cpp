#include<iostream>
using namespace std;
main()
{
   int n;
   cout<<"enter ani number = ";
   cin>>n;
   if(n>0)
   {
      cout<<"Positive number";
   }
   else
   {
       if(n<0)
       {
           cout<<"Negative number";
       }
       else
       {
           cout<<"invalid input";
       }

   }
}
