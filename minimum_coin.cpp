#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x%5!=0){
            cout<<"-1"<<endl;
        }
        else{
            int n ;
            n = x/10 +(x%10)/5;
          cout<<n<<endl;
            
        }
    }
    
	return 0;
}
