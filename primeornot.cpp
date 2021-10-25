//Check whether a number is prime or not
//to check whether a number is prime or not it is only divisible by 1 and itself
//it should not be divisible by any other number
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            cout<<"Not prime:";
            break;
        }
    }
    if(i==n)
    {
        cout<<"Prime:";
    }

    return 0;
}