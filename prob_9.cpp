#include<iostream>
using namespace std;
int main()
{
    int i,x;
    cout<<"ENTER THE NUMBER :- ";
    cin>>i;


    int revn=0;
    int original = i;

    while (i!=0)
    {
        //extraction of a number 
    
        x=i%10;
        revn=(revn*10)+x;
        //changing a number 
        i=i/10;
    }
    cout<<revn;
    cout<<endl;
    cout<<original;
    
    cout<<endl;

    if(original==revn)
    {
        cout<<"NUMBER IS PALLIDROME";
    }
    else
    {
        cout<<"NUMBER IS NOT PALLIDROME";
    }

   
}