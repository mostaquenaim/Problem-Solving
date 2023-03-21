#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,arr[200],mini,sum=0;
    cin>>t;


    while(t--){
        cin>>n;
        //cout<<"n="<<n;
        sum=0;

        i=0;
        cin>>arr[0];
        mini=arr[0];

        for(int i=1;i<n;i++)
        {
        cin>>arr[i];
        mini=min(mini,arr[i]);

        }

        for(int i=0;i<n;i++){
            sum+=arr[i]-mini;
        }

        cout<<sum<<endl;

    }


}

