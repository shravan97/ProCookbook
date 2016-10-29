#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll gcd(ll a,ll b)
{
    return (b==0)?a:gcd(b,a%b);
}

int main()
{
    ll num1,num2;
  
    cin>>num1>>num2;
    cout<<gcd(num1,num2)<<endl;
}
