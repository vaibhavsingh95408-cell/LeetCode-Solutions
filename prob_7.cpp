#include<iostream>
using namespace std;
int main()
/*{
    int a,x;
    cout<<"ENTER THE NUMER :- ";
    cin>>a;

    if(a<0)
    {
        cout<<"-";
        a=-a;
    }

    while(a!=0)
    {
        x=(a%10);
        cout<<x;

        a=a/10;

    }
}*/
{
    int n,digit,ans=0;
    cout<<"ENTER YHE NUMBER :- ";
    cin>>n;

    while(n!=0)
    {
        digit=(n%10);
        
        ans=ans*10+digit;

        n=n/10;




    }
    cout<<ans;


}
/*class Solution {
public:
    int reverse(int x) {
        int digit;
        long long ans = 0;

        while(x != 0) {
            digit = (x % 10);
            ans = ans * 10 + digit;
            x = x / 10;
        }

        if(ans > INT_MAX || ans < INT_MIN) {
            return 0;
        }

        return ans;
    }
};*/