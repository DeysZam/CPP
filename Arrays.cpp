#include<bits/stdc++.h>

using namespace std;

//MAX and MIN in 1-D Array Elements  
/*
int main(){
   int n;
   cin>>n;

   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int maxN=INT_MIN;
   int minN=INT_MAX;
   for(int i=0;i<n;i++){
       maxN=max(maxN,arr[i]);
       minN=min(minN,arr[i]);
   }
   cout<<maxN<<" "<<minN;
   return 0;
  } 
*/

//Linear Searching of Key
/*
int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
 cout<<"Key=";
 int key;
 cin>>key;

 cout<<linearSearch(arr,n,key)<<endl;


    return 0;
}
*/


//Binary Searching
/*
int binarySearch(int arr[],int n,int key){
    int s={0};
    int e=n;
    int m=(s+e)/2;
    while(s<=e){
       if(arr[m]==key){
           return m;
       }
       else if(arr[m]<key){
           s=m+1;
       }
       else {
           e=m-1;
       }
    }
    return -1;
    
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  int key;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   cout<<"Key=";
  cin>>key;
   
   cout<<binarySearch(arr,n,key);

    return 0;
}
*/
//SELECTION SORT
/*
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int a=arr[j];
                arr[j]=arr[i];
                arr[i]=a;
            }
        }
    }

    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
*/

//BUBBLE SORT
/*
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<(n-i);j++){
            if(arr[j+1]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
*/


//INSERTION  SORT-Method-II_(for-for nest)
/*
int main(){
    
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   for(int i=1;i<n;i++){
       for(int j=i-1;j>=0;j--){
           if(arr[j]>arr[j+1]){
               int temp=arr[j+1];
               arr[j+1]=arr[j];
               arr[j]=temp;
           }
       }
   }
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }

    return 0;
}
*/

//INSERTION SORT-Method-I_(for-while nest)
/*
int main(){

   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   for(int i=1;i<n;i++){
       int j=i-1;
       while(arr[j]>arr[j+1] && j>=0){
           int counter=arr[j+1];
           arr[j+1]=arr[j];
           arr[j]=counter;
           j--;
       }
   }
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   
    return 0;
}
*/
//Print sum of all subarrays
/*
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
       int sum={0};
        for(int j=i;j<n;j++){
          sum+=arr[j];
          cout<<sum<<" ";
        }
    }

    return 0;
}
*/
//Google KickStart Question
/* 
int main(){            //MY SOL
    
    int n;
    cin>>n;
    int arr[n];
    int output={2};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int s=arr[j]-arr[j-1];
            if(arr[j+1]-arr[j]==s){
                if(arr[j+2]-arr[j+1]==s){
                    continue;
                }
                else{
                    output=max(output,j+2-i);
                }
                
            }
            else{
                break;
            }

        }
    }
    cout<<output<<endl;


    return 0;
}
*/              //Kickstart solution acc to contraints
/*
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     int ans=2;
     int pd=a[1]-a[0];
     int j=2;
     int current=2;

        while(j<n){
            if(pd==a[j]-a[j-1]){
                current++;
            }
            else{
                pd=a[j]-a[j-1];
                current=2;
            }
            ans=max(ans,current);
            j++;
        }
    cout<<ans<<endl;



    return 0;
}
*/
/* //Record Breaker Problem-Kickstart Google
int main(){

   int n;
   cin>>n;
   int a[n+1];
   a[n]=-1;
   for(int i=0;i<n;i++){
       cin>>a[i];
   }

   int v=a[0];
   int recb={0};
   int j=1;

   while(j<n){
    
       if(a[0]>a[1]){
           recb++;
       }
       if(a[j]>v && a[j+1]<a[j]){
           recb++;
       }
       v=max(v,a[j]);

       j++;
   }
cout<<recb<<endl;
    return 0;
}
*/
/* //A Subarray of Sum S
int main(){
   int n,s;
   cin>>n>>s;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }

   int i=0,j=0,st=0,en=0;
   int sum={0};
   while (j<n && sum+arr[j]<=s){
       sum+=arr[j];
       j++;
   }
   if(sum==s){
       cout<<i+1<<" "<<j<<endl;
       return 0;
   }
   else{
       sum+=arr[j];
   }

   while(i<=j && sum>s){
       sum-=arr[i];
       i++;
   }
   if(sum==s){
       st=i+1;
       en=j+1;
   }

   cout<<st<<" "<<en;


    return 0;
}
*/
 // SMALLEST POSITIVE MISSING NUMBER



//bubble sort

int main(){

    int n;
    cin>>n;

  int arr[n];
  for (int i=0;i<n;i++){
      cin>>arr[i];
  }

  for(int i=1;i<n;i++){
      int current=arr[i];
      int j=i-1;
      while(arr[j+1]<arr[j] && j>=0){
          arr[j]=arr[j+1];
          arr[j+1]=current;
          j--;
      }

      }

  }

    return 0;

}

//insertion sort