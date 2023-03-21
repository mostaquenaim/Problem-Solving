#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int t,n,a,maxi,mini;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>a;
        maxi=a;
        mini=a;
        n--;
        while(n--){
        cin>>a;
            maxi=max(maxi,a);
            mini=min(mini,a);
        }
        cout<<maxi-mini<<endl;
    }
}
