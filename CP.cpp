#include<bits/stdc++.h>

using namespace std;

//MARATHON
/*
int main(){


	int t;
	cin>>t;
  while(t--){
      int days,d,a,b,c;
      cin>>days>>d>>a>>b>>c;
        int km=d*days;
        if(km>=42){
            cout<<c<<endl;
        }
        else{
            if(km>=21){
                cout<<b<<endl;
            }
            else{
                if(km>=10){
                    cout<<a<<endl;;
                }
                else{
                    cout<<"0\n";
                }
            }
        }      
   }


    return 0;
}
*/

//VACCINE
/*
int main(){
   
    int t;
    cin>>t;
    while(t--){
       int g,p;
       int a[10];
       cin>>g>>p;
       for(int i=0;i<10;i++){
           cin>>a[i];
       }
       int sum=0;

       for(int i=0;i<10;i++){
           sum+=a[i];
       }
       int minsum=0;
       for(int i=0;i<g-1;i++){
         minsum+=a[i];
       }
       int worst=minsum+1;
       int best=minsum+a[g-1];

       int min=0;
       int max=0;

       max=(sum-worst)/p + 1;
       min=(sum-best)/p +1;

       cout<<min<<" "<<max<<endl;

    }
   return 0;
}
*/

//Inclusion-Exclusion Principle==>(VENN DIAGRAM A U B = A + B - (A . B))
   //numbers between 1 to n divisible by n1 and n2
   /*
int divisible(int n, int d1, int d2){

       int count={0};

       for(int i=d2;i<=n;i++){
           if(i%d1==0 && i%d2==0){
               count++;
           }
       }
       

       return count;
   }

int main(){
  
   int n,d1,d2;
   cin>>n>>d1>>d2;

  cout<< divisible(n,1,d1) + divisible(n,1,d2) - divisible(n,d1,d2) <<endl;




    return 0;
}*/

//FIND GCD/HCF{Noob Approach}
/*

int gcd(int n1, int n2){

    int maxN=INT_MIN;

    for(int i=1;i<=n1;i++){
        if(n1%i==0 && n2%i==0){
            maxN=max(maxN,i);
        }
    }
    cout<<maxN<<endl;

    return 0;
}


int main(){
   
    int n1, n2;
    cin>>n1>>n2;

    gcd(n1,n2);


    return 0;
}
*/
/*
//Euclid's Algorithm to find GCD/HCF


int gcd(int a, int b){
    int ans=1;
    if(a<b){
       int temp=b;
       b=a;
       a=temp;
    }
    while(a%b>0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return b;
}
*/


/*
int main(){
    
    int n1,n2;
    cin>>n1>>n2;

    cout<<gcd(n1,n2)<<endl;;


    return 0;
}
*/

//May Long'21-- partial correct---summation question
/*
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int a[2*k];
        for(int i=1;i<2*k+1;i++){
            int n1=k + i*i;
            int n2=k+ (i+1)*(i+1);
            a[i-1]=gcd(n1,n2);
        }
          int sum=0;
        for(int i=0;i<2*k;i++){
          sum+=a[i];  
        }

        cout<<sum<<endl;
    }


    return 0;
}
*/


#include<bits/stdc++.h>

using namespace std;

/*
int main(){

    int t;
    cin>>t;

   while(t--){

      int n,k,f;
      cin>>n>>k>>f;

      int a[2*n];

      for(int i=1;i<2*n;i+=2){
          cin>>a[i-1]>>a[i];
      }
      int sum=k;

      sum-=a[0];
      sum-=f-a[2*n-1];

      for(int i=1;i<n;i++){
          sum-=a[2*(i+1)-2]-a[2*i-1];
      }

      if(sum<=0){
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }


   }

   return 0;
}
   */         

#include <bits/stdc++.h>
using namespace std;
 
void SieveOfEratosthenes(int n)
{
   int sum=1;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        
        if (prime[p] == true)
        {
           
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
     
      for (int p = 3; p <= n; p++){
        if (prime[p]==1 && p*2>n){

            sum+=1;
      
            
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
    SieveOfEratosthenes(n);
  }




    return 0;
}