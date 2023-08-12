
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,m;
    long long a[50001];
    
    cin>>t;

    while(t--){
        
        long long min2[25001],minc=1000000001;
        
        cin>>n;
        
        for(int i=0;i<n;i++){
            
            cin>>m;
            
            for(int j=0;j<m;j++){
                cin>>a[j];
            }
            
            sort(a,a+m);
            min2[i]=a[1];
            
            minc=min(minc,a[0]);
            
        }
        
        sort(min2,min2+n);
        
        long long sum=minc;
        
        for(int i=1;i<n;i++){
            sum+=min2[i];
        }
        
        cout<<sum<<endl;
    }
}
