#include <bits/stdc++.h>
using namespace std;

int main() {

long int t;
cin>>t;

while(t--){
    
    long int n;
    cin>>n;
    
    long int s=0,a=1;
    
    while(n>=s){
        s=pow(2,a);
        a++;
    }
    
    long int P=pow(2,a-2)-1;
    long int Sum=s-n;
    long int Result=P*(P+Sum);
    cout<<Result<<endl;
}

	return 0;
}
