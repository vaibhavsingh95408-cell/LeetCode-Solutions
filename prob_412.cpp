#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,30,3,4,5};

    for (int i=0;i<5;i++)
    {
        if(arr[i]%3==0 && arr[i]%5==0)
        {
            cout<<"FIZZBUZZ"<<" ";
        }
        else if(arr[i]%3==0)
        {
            cout<<"Fizz"<<" ";
        }
        else if(arr[i]%5==0)
        {
            cout<<"Buzz"<<" ";
        }
        else
        {
            cout<<arr[i]<<" ";
        }
    }


}