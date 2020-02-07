#include <iostream>
#include <string>
using namespace std;
void isvestis(string vardas,string sw)
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
    string vardas, sw;
    sw = "Sveikas, ";
    cout << "Vardas?";
    cin >> vardas;
    isvestis(vardas,sw);
    cout << "Programos pabaiga";
    return 0;
}
