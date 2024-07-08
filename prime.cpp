#include<iostream>
using namespace std;
int main()
{
    int i,num;
    bool(prime_number)=true;
    cout<<"Enter a number to check:"<<endl;
    cin>>num;
    for(i=2;i<=num;i++)
    {
     if (num%i==0)
     {
        prime_number=false;
        break;
     }
    }
    if (prime_number)
    {
        cout<<"Its prime number"<<endl;
    }
    else{
        cout<<"Its not a prime number"<<endl;
    }
    return 0;

}
    