#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a[101],b[101],temp,count=0;
    bool flag=true;

    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];


    if(n>1){
    for(int i=1;i<n;i++){

    for(int j=i+1;j<=n;j++){
        if(a[i]>a[j]){
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }}
    }

    cin>>m;
    for(int i=1;i<=m;i++)cin>>b[i];

    if(m>1){
    for(int i=1;i<m;i++){
    for(int j=i+1;j<=m;j++){
        if(b[i]>b[j]){
            temp=b[j];
            b[j]=b[i];
            b[i]=temp;
        }
    }}
    }

    int j=1;
    for(int i=1;i<=n;i++){
            if(flag){
        while(1){
            //cout<<"a[i]="<<a[i]<<" b[j]="<<b[j]<<endl;

           if(a[i]==b[j] || a[i]+1==b[j] || a[i]-1==b[j]) {
                //cout<<"i="<<i<<", j="<<j<<endl;
                count++;
                if(j+1<=m)j++;
                else flag=false;
           break;
           }
           else if(a[i]+1<b[j]) break;
            else if(j+1<=m)j++;

            else {
                    flag=false;
            break;
            }

        }
            }
            else break;

    }
    cout<<count;

}
