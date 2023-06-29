#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        int n,x,y,k;
        cin>>n>>k>>x>>y;
        
        int ans=k*x;
	    int temp=min(x,y);
	    ans=ans+(n-k)*temp;
	    cout<<ans<<endl;
    }
    
    
	return 0;
}
