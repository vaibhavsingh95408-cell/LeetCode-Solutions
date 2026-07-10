#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,4};

    int hash[13]={0};
    for(int i=0;i<5;i++)
    {
        hash[arr[i]]+=1;

        if(hash[arr[i]]==2)
       {
        cout<<arr[i];
        cout<<"TRUE";
        return 0;
       }

      
    }
 cout<<"FALSE";
}
