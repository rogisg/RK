
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    double s = 0.0;
    double n = 1.0;
    for(int i = 0;i<10;++i){
       cout<<1/pow(n, 4.0/3.0)<<endl;
       ++n;
       s = s + (1/pow(n, 4.0/3.0));
        
    }
    cout<<s<<endl;

    return 0;
}
