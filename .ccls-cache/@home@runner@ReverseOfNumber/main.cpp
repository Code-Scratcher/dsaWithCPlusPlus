#include <iostream>

using namespace std;

int forloop(int number)
{
    int reverse=0;
    for(;number!=0;number=number/10)
    {
        int rem=number%10;
        
        reverse=reverse*10+rem;
    }
    
    return reverse;
}

int whileloop(int number)
{
    int rem;
    int reverse=0;
    
    while(number>0)
    { 
        rem=number%10;
        reverse=reverse*10+rem;
        number=number/10;
    }
   return reverse;
}

int dowhileloop(int number)
{
  int rem;
  int reverse=0;
  do
    {
      rem=number%10;
      reverse=reverse*10+rem;
      number=number/10;
    }
    while(number>0);
    return reverse;
}


int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Reverse using for loop:"<<forloop(n)<<"\n";
    cout<<"Reverse using while loop:"<<whileloop(n)<<"\n";
    cout<<"Reverse using while loop:"<<dowhileloop(n);
    cout<<"Nww";

    return 0;
}