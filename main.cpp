#include <iostream>
#include <string>
using namespace std;
void isvestis(string lytis, string vardas,string sw)
{
  for(int i=0; i <vardas.length()+13; i++)
  {
    cout << "*";
  }
  cout << "\n";
  cout << "*";
  for(int i=0; i < vardas.length()+11; i++)
  {
    cout << " ";
  }
  cout<< "*"<<endl;
  cout<<"* "<<sw<<vardas<<" *"<<endl;
  cout<< "*";
  for(int i=0; i < vardas.length()+11; i++)
  {
    cout<< " ";
  }
  cout<< "*"<<endl;

  for(int i=0; i < vardas.length()+13; i++)
  {
    cout<<"*";
  }
  cout<<"\n";
}
int main()
{
  string lytis, vardas, sw;
  cout << "Lytis? (Vyras/Moteris)";
  cin >> lytis;
  if(lytis=="Vyras")sw = "Sveikas, ";
    else sw = "Sveika, ";
  cout << "Vardas?";
  cin >> vardas;
  isvestis(lytis, vardas,sw);
  cout << "Programos pabaiga";
  return 0;
}
