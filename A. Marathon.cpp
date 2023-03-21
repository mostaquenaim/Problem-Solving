#include<iostream>
using namespace std;

int main(){
  //  cout<<"hello";
  int t,a,b,c,d,count;
  cin>>t;

  while(t--){
        count=0;
    cin>>a>>b>>c>>d;
    if(a<b) count++;
    if(a<c) count++;
    if(a<d) count++;
    cout<<count<<endl;

  }


}
