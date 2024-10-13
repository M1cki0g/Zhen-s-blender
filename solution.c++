#include <iostream>
#include<cmath>
using namespace std;

int main()
{int t,n,x,y;
    cin>>t;

    while(t--){
    cin>>n;

    cin>>x;
    cin>>y;

    int min_val = min(x,y);
    int i =ceil(static_cast<float>(n)/min_val) ;

    cout<<i<<endl;
    }

    return 0;
}
