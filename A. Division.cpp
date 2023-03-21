#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,rating;
    cin>>t;

    while(t--){
        cin>>rating;
        cout<<"Division ";
        if(rating>=1900) cout<<"1";
        else if(rating>=1600 && rating <=1899) cout<<"2";
        else if(rating>=1400 && rating <=1599) cout<<"3";
        else if(rating <=1399) cout<<"4";
        cout<<endl;


    }
}
