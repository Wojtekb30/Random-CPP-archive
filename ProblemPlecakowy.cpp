#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
const int N=5;
struct przedmiot
{
int wart, waga;
};
bool Porownaj(przedmiot a, przedmiot b)
{
return (float(a.wart)/a.waga>float(b.wart)/b.waga);
}
int Plecak(przedmiot P[], int makswaga, int K[])
{
int makswart = 0;
for(int i=0; i<N; i++)
{
K[i]=makswaga/P[i].waga;
makswaga=makswaga%P[i].waga;
makswart+=K[i]*P[i].wart;
}
return makswart;
}

int main()
{
    ifstream we("do-plecaka.txt");
    przedmiot P[N];
    int K[N];
    int makswaga, makswart;
    for(int i=0; i<N; i++)
    {
    we>>P[i].wart>>P[i].waga;

    }
    we.close();
    cout<<"Podaj maks wage w plecaku: ";
    cin>>makswaga;
    sort(P, P+N, Porownaj);
    makswart= Plecak(P, makswaga, K);
    cout<<"Wartosc: "<<makswart<<endl;
    for(int i=0; i<N; i++)
    {
    cout<<K[i]<<" o wartosci "<<P[i].wart<<" i wadze "<<P[i].waga<<endl;

    }
    return 0;
}
