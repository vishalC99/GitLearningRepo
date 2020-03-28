#include<bits/stdc++.h>
using namespace std;

int ladder(int n,int k,int dp[])
{
    if(n==0)
    return 1;
for(int i =0;i<j;i++)
{
    int ways=0;

    for(int i=1;i<=k;i++)
    {if(n-i>=0)
    ways+=ladder(n-i,k,dp);}

    return dp[n]=ways;
}


int main()
{
    int n,k;
    cin>>n>>k;

    int dp[100]={0};

    cout<<"hello";

    ladder(n,k,dp);
    cout<<dp[n];
}