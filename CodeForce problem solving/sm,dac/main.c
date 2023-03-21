#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,n2,a,b,arr[100001],i=1,temp;
    cin>>n;
    bool flag=false;
    n2=n;

    while(n--){

        cin>>a>>b;
        arr[a]=b;
    }

    n=n2;

    for(int i=2;i<=n;i++){
        if(arr[i]<arr[i-1]){
            flag=true;
            break;
        }
        }

    if(flag){
        cout<<"Happy Alex";
    }
    else cout<<"Poor Alex";

}
