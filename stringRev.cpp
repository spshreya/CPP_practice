#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void revStr(string& str){
    int n= str.length();
   
    for (int i=0; i<=n/2; i++){
       swap(str[i],str[n-i-1]);
        
    }
    
}


int main(){
    string str = "Shreya hi";
    revStr(str);
    cout<<str;
    
    return 0;
}
