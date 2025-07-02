#include <iostream>
using namespace std;
int main(){
char ch;
cin>>ch;
if (int (ch) >=97 && int(ch)<=122)
{
    cout<<"Smaller Case";
}
else if (ch>=0 &&ch<=9)
{
    cout<<"It lies in Num 1 to 9";
}
else if (int (ch)>= 65 && int (ch) <= 96)
{
    cout<<"Bigger Case";
}
else 
{
    cout<<"None of the Case";
}


return 0;
}