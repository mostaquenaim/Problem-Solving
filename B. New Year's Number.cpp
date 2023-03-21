#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,a=2020,b=2021,sum=0,i=0,j=0;
    bool flag=true;

    cin>>t;

    int arr[1000001]={0};

    while(flag){
            i=0;

    while(1){
         sum=i*a+j*b;

        if(i==0 && sum>1000001) flag=false;
        if(sum>1000001) break;
        else arr[sum]=1;
        i++;
    }

    j++;
    }

    while(t--){
        cin>>n;
        if(arr[n]==1) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }


}

