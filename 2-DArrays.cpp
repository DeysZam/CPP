#include<bits/stdc++.h>

using namespace std;

/*
int main(){


    //spiral order print 

/*
    int row_start=0,column_start=0,row_end=n-1,column_end=1;

    while(row_start<=row_end && column_start<=column_end){
        for(int col=column_start;col<=column_end;col++){
            cout<<a[row_start][col];
        }
        row_start++;

        for(int row=row_start;row<=row_end;row--){
            cout<<a[row][column_end];
        }
        column_end--;

        for(int col=column_end;col>=column_start;col++){
            cout<<a[row_end][col];
        }
        row_end--;

        for(int row=row_end;row>=row_start;row--){
            cout<<a[row][column_start];
        }
        column_start++;
    }
*/

//Transpose of a matrix

/*
int n;
cin>>n;
int a[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
  
   for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
        int temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
    }
   }
   
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<"\n";
}
*/

//Matrix Multiplication
/*
int n1,n2,n3,sum=0;
cin>>n1>>n2>>n3;
int a1[n1][n2],a2[n2][n3],a3[n1][n3];

   for(int i=0;i<n1;i++){
       for(int j=0;j<n2;j++){
           cin>>a1[i][j];
       }
   }
   for(int i=0;i<n2;i++){
       for(int j=0;j<n3;j++){
           cin>>a2[i][j];
       }
   }
   for(int i=0;i<n1;i++){
       for(int k=0;k<n3;k++){
           for(int j=0;j<n2;j++){
               sum+=a1[i][j]*a2[j][k];
           }
           a3[i][k]=sum;
           sum=0;
       }
   }
   for(int i=0;i<n1;i++){
       for(int j=0;j<n3;j++){
           cout<<a3[i][j]<<" ";
       }
       cout<<"\n";
   }
*/

//CHARACTER ARRAYS
/*
char arr[100]="apple";
int i=0;
while(arr[i] != '\0'){
    cout<<arr[i]<<endl;
    i++;
}
*/

//CHECK PALINDROME WORDS
/*
int n;
cin>>n;
char arr[n+1];
cin>>arr;
bool flag=true;
for(int i=0;i<n;i++){
    if(arr[i]!=arr[n-1-i]){
        flag=false;
        break;
    }
}
if(flag==true){
    cout<<" ITS A PALINDROME "<<endl;
}
else{
    cout<<" NOT A PALINDROME "<<endl;
}



   return 0;
}
*/

