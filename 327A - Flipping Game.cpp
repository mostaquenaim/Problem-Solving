
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[101],tzc=0,zc=0,maxzc=0;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            tzc++;
            zc++;
            maxzc=max(maxzc,zc);
        }
        else{
            if(zc){
                zc--;
            }
        }
    }
    if(maxzc)
    cout<<n+maxzc-tzc;
    else cout<<n-1;
}

