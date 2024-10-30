#include<iostream>
#include<math.h>
using namespace std;


int main() {

    int n;
    cin >> n;


    int ans  = 0;
    int i = 0;
    while(n != 0 ) {

        int bit  = n %2;
        n = n/2;

        ans = (bit * ceil(pow(10, i) )) + ans;

        
        i++;

    }

    cout<<" Answer is " << ans << endl;
    return 0;
}
