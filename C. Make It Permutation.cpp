/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int n,c,d,rc=0,cnt=0;
        cin>>n>>c>>d;
        
        int arr[n+1];
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        sort(arr,arr+n);
        
        if(arr[0]!=1) {
            cnt+=d;
        } 
        
        
        
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                cnt+=c;
            }
            else if(arr[i]-1==arr[i-1]) continue;
            else{
                if(c*(n-i)>d*(arr[i]-(arr[i-1]+1))){
                    cnt+=d*(arr[i]-(arr[i-1]+1));
                }
                else{
                    cnt+=c*(n-i);
                    break;
                }
            }
            
        }
        
        
        cout<<cnt<<endl;
    }
}
