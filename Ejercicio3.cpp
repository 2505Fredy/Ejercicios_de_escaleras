#include <iostream>
#include <string>

using namespace std;

void escaleravariable(int escalon){
  string cadena1= "|___", cadena2="|___|\n", cadena3= "___|\n";
  int valor=4;
  int contador=0;
  for (int cont=escalon; cont>0; cont--) {
    cout << cadena1;
    for (int espacio= 8*cont - 3; espacio>0; espacio--) cout << " ";
    cout << cadena3;
    for (int a=0; a<valor; a++) cout << " ";
    valor+=4;  
  }
  cout << cadena2;
  system("clear");
}

//Igualmente, no tengo idea de como ralentizar la animación.

void escaleraDoble(int escalon) {
  for (int escalon1=1; escalon1<=escalon; escalon1++)  escaleravariable(escalon1);
}

int main(){
  int escalon;
  cout << "Escriba el número de escalones: ";
  cin >> escalon;
  escaleraDoble(escalon);
  return 0;
}
