#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Money" << endl;
    int n;
    cin >> n;
    cout << "Enter Which amount you need " << endl;
    cout<<"100 for 100 Rupees Notes"<<endl;
    cout<<"50 for 50 Rupees Notes"<<endl;
    cout<<"20 for 20 Rupees Notes"<<endl;
    cout<<"1 for 1 Rupees Notes"<<endl;
    int m;
    cin >> m;
    int a = (n / 100) , b=((n - a * 100) / 50) , c=(n-a*100-b*50)/20 , d=(n-a*100-b*50-c*20);
    switch (m)
    {
    case 100:
        cout << "100 Rupees Notes Required are " << a;
        break;
    case 50:
        cout << "50 Rupees Notes Required are " << b;
        break;
    case 20: 
        cout<<"20 Rupees Notes Required are "<<c;
        break;
    case 1:
        cout<<"1 Rupees Notes Required are "<<d;
        break;
    default:
        cout << "Case is Not matched";
        break;
    }
    return 0;
}