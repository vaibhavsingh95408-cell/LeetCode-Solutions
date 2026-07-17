#include<iostream>
using namespace std;
int main()
{

    int key;
    cout<<"ENTER THE KEY :- ";
    cin>>key;
    int arr[5]={2,4,8,18,20};

    int start=0;
    int end =4;
    int mid = start+(end-start)/2;

    while(start<=end)
    {
        if(key==arr[mid])
        {
            cout<<"THE ELEMENT IS AT INDEX :- "<< mid;
            return 0;
        }
        if (key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }

        mid=start+(end-start)/2;
    }
    cout<<"ELEMENT NOT FOUND";



}