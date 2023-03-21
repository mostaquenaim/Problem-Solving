#include <bits/stdc++.h>
#include<sstream>
using namespace std;
typedef long long                        ll;

int digits(int n)
{
int sum=0,m;

while(n>0)
{
m=n%10;
sum=sum+m;
n=n/10;
}
return sum;
}



void solve() {
int n, x, y;
cin >> n;



int i=n/2;
if(abs(digits(n-i)-digits(i))<2) {
  //     cout<<digits(n-i)<<" "<<digits(i)<<endl;
    cout<<i<<" "<<n-i<<endl;
    cout<<"come here"<<endl;
    return;
}
else{
    stringstream ss,ss2;
   ss<<i;
   string s;
   ss>>s;
   ss2<<n-i;
   string s2;
   ss2>>s2;

   if(s[0]==57){
    for(int i=0;i<=(s.length()+1)/2;i++){
        cout<<"5";
    }
    for(int i=(s.length()+1)/2+1;i<s.length();i++){
        cout<<"4";
    }
    cout<<" ";
    for(int i=1;i<=(s2.length()+1)/2;i++){
        cout<<"4";
    }
    for(int i=(s.length()+1)/2+1;i<s.length();i++){
        cout<<"5";
    }
    cout<<endl;
   }
   else{

   for(int j=0;j<s.length();j++){

    if(s[j]==57){
        for(int i=j;i<=(s.length()-j)/2;i++){
        cout<<"5";
    }
    for(int i=(s.length()-j)/2+1;i<s.length();i++){
        cout<<"4";
    }
    cout<<" ";
    for(int i=0;i<j;i++) cout<<s2[i];
    for(int i=j;i<=(s2.length()-j+1)/2;i++){
        cout<<"4";
    }
    for(int i=(s2.length()-j+1)/2+1;i<s2.length();i++){
        cout<<"5";
    }
    cout<<endl;break;
    }
cout<<s[j];
   }
   }
}
}


int main(){

   // ll test=2,product=0;
//    ll arr[1000000001];

	int t;
	cin>>t;
  //  t=1;
	while(t--){
		solve();
}
}
