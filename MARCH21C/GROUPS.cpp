#include <iostream>
#include <bits/stdc++.h> 
using namespace std;


 
int main(void)
{
    
    int num;
    cin>>num;
    while(num--){
    int counter=0;
    string s;
    cin>>s;
    int n=s.length();
    int i=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1' && s[i+1]!='1'){
            counter++;
        }
    }
    

    cout<<counter<<endl;

    }
    return 0;
}
