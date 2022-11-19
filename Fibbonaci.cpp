#include <iostream>
//long long liczba = 0;
using namespace std;
unsigned long long FibRek(short n)
{
//liczba = liczba+1;
    if(n<3)
        return 1;
    else
        return FibRek(n-1)+FibRek(n-2);
}

int main()
{
    short n;
    cout<< "Wpisz n: ";
    cin>>n;
    cout<<FibRek(n)<<endl;
//    cout<<"Wykonano w "<<liczba<<" iteracjach";
    return 0;
}
