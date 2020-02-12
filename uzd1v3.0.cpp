#include <iostream>
#include <string>
using namespace std;
struct str{
    int dydis;
    string vardas;
    bool sw;
    string feil = "";
    string seil = "";
};
void isvestis(str A)
{
    A.seil = "*";
  for(int i=0; i < A.vardas.length()+13; i++)
  {
    A.feil+="*";
  }
  for(int i=0; i < A.vardas.length()+11; i++)
  {
    A.seil+=" ";
  }
  A.seil+="*";
  cout<<A.feil<<endl;
  for(int i=0; i < A.dydis; i++)
  {
    cout<<A.seil<<endl;
  }
  if(A.sw==true)cout<<"* Sveikas, "<<A.vardas<<" *"<<endl;
    else cout<<"* Sveika,  "<<A.vardas<<" *"<<endl;
  for(int i=0; i < A.dydis; i++)
  {
    cout<<A.seil<<endl;
  }
  cout<<A.feil<<endl;
}
int main()
{
    str A;
    cout << "Lytis? 1 - vyras, 0 - moteris";
    cin >> A.sw;
    cout << "Vardas?";
    cin >> A.vardas;
    cout<< "Kokio dydzio norite remelio? 1 - vienas tarpelis is abieju pusiu, 2 - du tarpeliai ir t.t";
    cin >> A.dydis;
    isvestis(A);
    cout << "Programos pabaiga";
    return 0;
}
