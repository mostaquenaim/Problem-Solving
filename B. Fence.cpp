#include <bits/stdc++.h>

using namespace std;

int main() {

	int  n,k;
	cin>>n>>k;
	long long arr[n]={0},sum;

    cin>>arr[0];

	for(int  i=1;i<n;i++){
		cin>>arr[i];
		arr[i]=arr[i-1]+arr[i];
	}

    sum=arr[k-1];
	int min=sum;
	long long  minindex=0;

	for(int i=1;i<=n-k;i++){
        sum=0;
		sum=arr[i+k-1]-arr[i-1];

		if(sum<=min){
				min=sum;
				minindex=i;
			}
	}

	cout<<++minindex<<endl;
	return 0;
}
