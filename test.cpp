
#include<iostream>

using namespace std;

int main()
{
    int n,m;
    long long a[n],q[m]; 
    long long arr[1000001]={0},sum[1000001];
    cin>>n;
    
    sum[0]=0;
    cin>>a[0];
    int i,j=1;
    
    for(i=1;i<n;i++){
        sum[i]=sum[i-1]+a[i-1];
        while(j<=sum[i]){
            arr[j]=i;
            j++;
        }
        cin>>a[i];
    }
    sum[i]=sum[i-1]+a[i-1];
    while(j<=sum[i]){
            arr[j]=i;
            j++;
        }
    
    cin>>m;
    for(i=0;i<m;i++){
        cin>>q[i];
        cout<<arr[q[i]]<<endl;
    }
    

}
