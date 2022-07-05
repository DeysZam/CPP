#include<bits/stdc++.h>

using namespace std;


void primeSieve(int n){
    int prime[n+1]={0};

    for(int i=2;i<n;i++){

        if(!prime[i]){
            for(int j=i*i;j<n;j+=i){
                prime[j]=1;

            }
        }
    }
    int sum=0;
    for(int i=n/2+1;i<=n;i++){
        if(!prime[i]){
            sum++;
        }
    }
    cout<<sum<<endl;
   
}

int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;

    primeSieve(n);
   }

    return 0;
}




