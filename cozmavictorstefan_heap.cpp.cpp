#include<iostream>
using namespace std;
int n;
int V[100];
int tata, fiu;
int read_data()
{
    cout<<"n=";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
     cout<<"Numarul [" <<i<< "] = ";
     cin>>V[i];
    }
}
int make_heaps()
{
    for(int i=2;i<=n;i++)
    {
     tata=i/2;
     fiu=i;
    while(tata>=1 && V[tata]<V[fiu])
         {
          swap(V[tata], V[fiu]);
          fiu=tata;
          tata=fiu/2;
         }
    }
}
int print_data()
{
    for(int i=1;i<=n;i++)
    cout<<V[i]<<endl;
}
int main()

{
read_data();
make_heaps();
print_data();
}
