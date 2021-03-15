#include <iostream>
using namespace std;

int main() {
	
	
	int N,H,x;
	cin>>N>>H>>x;

	int arr[N];
	int var=-1;

	for(int i=0;i<N;i++){
	    cin>>arr[i];
	    if(var<arr[i]){
	        var=arr[i];
	    }
	    
	}
	if((var+x)>=H){
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}
	
	
	
	return 0;
}
