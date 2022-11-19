//Program nie ukonczony

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

const int N=5;

void Losuj(bool A[][N])
{
 int i, j, idol;
 for (i=0;i<N;i++)
 for (j=0;j<N;j++) A[i][j]=rand()%2;
 if (rand()%2==1)
 {
 idol=rand()%N;
 for (i=0;i<N;i++) A[i][idol]=true;

  for (j=0;j<N;j++) A[idol][j]=false;

 }

}
void Wypisz(bool A[][N])
{

for (int i=0;i<N;i++)
{
for (int j=0;j<N;j++)
if (i!=j) cout<<A[i][j]<<" ";
else cout<<"  ";
cout<<endl;


}

}


int SzukajIdola(bool A[][N])
{
int i=1, kandydat=0;
while (i<N)
{
    if (A[kandydat][i]) kandydat=i;
    i++;
}
i=0; A[kandydat][kandydat]=false;
while (i<N && !A[kandydat][i]) i++;
if (i<N) return -1;
i=0; A[kandydat][kandydat]=true;
while (i<N && A[i][kandydat]) i++;
if (i==N) return kandydat;
else return -1;
}


int main()
{
    srand(time(NULL));
    bool A[N][N];
    int idol;
    Losuj(A);
    Wypisz(A);
    idol = SzukajIdola(A);
    if(idol==-1)
        cout<<endl<< "W tablicy nie ma idola";
    else
        cout<<endl<< "W tablicy jest idol: "<<idol;


    return 0;
}
