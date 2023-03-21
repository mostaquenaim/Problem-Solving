#include<iostream>
using namespace std;

int main(){
  //  cout<<"hello";
  int t,n,i;
  string s,s2="YES";
  cin>>t;

  while(t--){
     n=3,i=0;
    cin>>s;
    while(n--){
       s[i]=toupper(s[i]);
       i++;

    }
    if(s==s2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

  }


}
