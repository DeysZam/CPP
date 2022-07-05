#include<bits/stdc++.h>

using namespace std;

//sum till n
/*
int sum(int n){
    if(n==0){
        return 0;
    }
    int prevsum=sum(n-1);
    return n+prevsum;
}

int main(){

    int  n;
    cin>>n;

    cout<<sum(n)<<endl;

    return 0;
}
*/

//n raised to the power p

/*
int exp(int n, int p){
    if(!p){
        return 1;
    }
    int prevexp=exp(n,p-1);
    return n*prevexp;
}

int main(){

    int n,p;
    cin>>n>>p;

    cout<<exp(n,p)<<endl;


    return 0;
}
*/

//finding factorial

/*
int fac(int n){
    if(n==1){
        return 1;
    }
    int prevfac=fac(n-1);
    return n*prevfac;
}

int main(){
    int n;
    cin>>n;
    cout<<fac(n)<<endl;
    return 0;
}
*/

//Fibonacci Sequence

/*
int fs(int n){
   if(n==0 || n==1){
       return n;
   }
    return fs(n-1)+fs(n-2);
}

int main(){
    
    int n;
    cin>>n;

    cout<<fs(n)<<endl;


    return 0;
}
*/

//Check wether sorted or nah
/*
bool csort(int n, int a[]){
    if(n==1){
        return true;
    }
    if(a[n-1]>a[n-2] && csort(n-1,a)){
        return true;
    }
    
        return false;
    
}

int main(){
     
     int a[]={5,3,7,8,9};
     cout<<csort(5,a)<<endl;
   
    
    return 0;
}
*/

//Print numbers till n
   //ascending
   
/*
void num(int n){
    if(n==0){
       cout<<n<<" ";
       return;
    }
    num(n-1);
    cout<<n<<" ";
}

int main(){

int n;
cin>>n;
num(n);
    return 0;
}
*/

  
    //descending
/*
void num(int n){
    if(n==0){
        cout<<n;
        return;
    }
    cout<<n<<" ";
    num(n-1);

}
int main(){
    
    int n;
    cin>>n;
    num(n);

    return 0;
}
*/

//First Occurence of an element in an array;

/*
int focc(int a[],int n, int key, int i){
    if(i==n){
        return -1;
    }
    if(a[0]==key){
        return i;
    }
    else{
        i++;
        focc(a+1,n,key,i);
    }
}
*/
//Last Occurence 

/*
int locc(int a[],int n, int key){
    if(n==0){
        return -1;
    }
    if(a[n-1]==key){
        return n-1;
    }
    else{
        locc(a,n-1,key);
    }
}

int main(){

    int key;
    cin>>key;
    int a[]={4,2,1,2,5,2,7};

    cout<<locc(a,7,key)<<endl;
    return 0;
}
*/

//Reverse a string

/*
void revStr(string s){
    if(s.length()==0){
        return;
    }
    string ros=s.substr(1);
    revStr(ros);
    cout<<s[0];
}

int main(){
     
     string s="binod";
     
     revStr(s);
    
    return 0;
}
*/

//Replace pi by 3.14;
/*
void pi(string s){
    if(s.length()==0){
        return;
    }
    if(s.substr(0,2)=="pi"){
        cout<<"3.14";
        pi(s.substr(2));
    }
    else{
        cout<<s[0];
        pi(s.substr(1));
    }
}

int main(){

   string s="pixxppiixipi";

   pi(s);


    return 0;
}
*/

//Tower of Hanoi Problem

/*
void toh(int n, char src, char dest, char hlpr){
    if(n==1){
        cout<<"Move disk 1 from "<<src<<" to "<<dest<<endl;
        return;
    }
    toh(n-1,src,hlpr,dest);
     cout<<"Move disk "<<n<<" from "<<src<<" to "<<dest<<endl;
    toh(n-1,hlpr,dest,src); 
}

int main(){
    
    int n=3;

    toh(n,'A','C','B');


    return 0;
}
*/