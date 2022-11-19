#include <iostream>

using namespace std;

const int nominaly[]={1, 2, 5, 10, 20, 23, 50};
int N = sizeof(nominaly)/sizeof(nominaly[0]);
const int kwota=70;


int IleMonet()
{
int i, j;
int IleM[kwota+1];
IleM[0]=0;
for(i=1;i<=kwota;i++) IleM[i]=kwota+1;
for(i=1;i<=kwota;i++)
    for (j=0;j<N;j++)
        if (nominaly[j]<=i)
            if(IleM[i-nominaly[j]]+1<IleM[i])
                IleM[i]=IleM[i-nominaly[j]]+1;

    return IleM[kwota];
}

int main()
{
    cout << "Ile monet?:" << endl;
    cout<<kwota<<": "<<IleMonet();
    return 0;
}
