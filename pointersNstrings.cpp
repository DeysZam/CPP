#include<bits/stdc++.h>

//NOTE: header file <string> and for sorting function <algorithm>

using namespace std;


//POINTERS

/*void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){


 //SWAP BY REFERENCE AND NOT CALLING SINCE CALLING DOESNT CHANGE VARIABLE VALUE AND IT just PASSES THAT VARIABLE'S VALUE IN TO THE FUNTION

  int a=2,b=4;
  int *aptr=&a;
  int *bptr=&b;

  swap(aptr,bptr);
  cout<<a<<" "<<b<<endl;

    return 0;
}
*/

//STRINGS

int main(){
/*
    string str;
    string str1(5,'n');

    cout<<str1;
    */
   /*
   string s1="abc";
   string s2="xyz";
   cout<<s2.compare(s1)<<endl;
    */  //O/P: some positive number since s2 is bigger than s1 AND output=0 when strings are equal
   
   /*
    string s="nincompoop";
    cout<<s.find("com")<<endl;
    */ //output:: 3

/*
    string s1="nincompoop";
    s1.insert(2,"lol");
    cout<<s1<<endl;

    */

   //s1.substr(6,3)
   //int x; str="786" x=stoi(str)
   //x=786   cout<<to_string(x)+"2"<<endl    O/P:7862


   //Sorting in STRINGS
/*
   string s1="dsdsnueunzafkns";
   sort(s1.begin(),s1.end());

   cout<<s1<<endl;
*/

//convert whole string to uppercase
/*
string s1="sdaakneceasm";

for(int i=0;i<s1.length();i++){
    if(s1[i]>='a'&&s1[i]<='z'){
        s1[i]-=32; // 'a'-'A'=32; so add "+=" 32 to convert to lowercase;
    }
}

cout<<s1<<endl;

OR USE transform()

transform(s1.begin(),s1.end(),s1.begin(), ::toupper/::tolower)
    

    return 0;
}
*/


//FORM THE LARGEST NUMBER FROM GIVEN STRING

    //sor(s.begin(),s1.end(), greater<int>());

   string s="abcabvicicbcajsdmDbaaa";
   int a[26];
   for(int i=0;i<26;i++){
       a[i]=0;
   }
   for(int i=0;i<26;i++){
       a[s[i]-97]++;
   }
   
   char ans='a';
   int maxF=INT_MIN;
   for(int i=0;i<26;i++){
       if(a[i]>maxF){
           maxF=a[i];
           ans=i+97;
       }
   }
  cout<<maxF<<" "<<ans<<endl;

   return 0;
}