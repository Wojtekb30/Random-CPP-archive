#include <iostream>

using namespace std;
int NWDRek(int a, int b)
{

    if(b==0)
        return a;

    return NWDRek(b, a%b);

}

int main()
{
    int a, b;
    cout<<"Podaj a i b: ";
    cin>>a>>b;
    cout<<NWDRek(a, b);
    return 0;
}
