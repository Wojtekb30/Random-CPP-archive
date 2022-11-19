#include <iostream>
#include <cmath>

using namespace std;

const int N=200;

void Sito(int x)
{
    bool*tablica=new bool[x+1];

    for(int i=2; i<=x; i++) tablica[i]=true;

    for(int i=2; i<=sqrt(x); i++)
    {
        if(tablica[i]==true)
            for(int j=i*i; j<=x; j+=i) tablica[j]=false;
    }

    for(int i=2; i<=x; i++)
    {
        if(tablica[i]==true) cout << i << endl;
    }
}

int main()
{

    Sito(N);

    return 0;
}
