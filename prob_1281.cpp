#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE NUMBER :- ";
    cin>>n;
    int x,sum=0,product=1,result;

    while(n!=0)
    {
        x=(n%10);
        sum=sum+x;
        product=product*x;
        n=n/10;
     }
    cout<<"THE SUM OF A NUMBER DIGIT IS :- "<<sum<<endl;
    cout<<"THE PRODUCT OF A NUMBER IS :- "<<product<<endl;
    result=product-sum;
    cout<<result;
}