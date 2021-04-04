#include <iostream>
#include <string>
using namespace std;

void escaleraDoble(int persona){
  int escalon=3;
  string cadena1= "|___", cadena2="|___|\n", cadena3= "___|\n", cadena4="|_P_", cadena5="_P_|\n";
  if (persona==0) cadena2="|_p_|\n";
  int valor=4;
  int contador=0;
  for (int cont=escalon; cont>0; cont--) {
    if (cont== -persona) cout << cadena4; else cout << cadena1;
    for (int espacio= 8*cont - 3; espacio>0; espacio--) cout << " ";
    if (cont== persona) cout << cadena5; else cout << cadena3;
    for (int a=0; a<valor; a++) cout << " ";
    valor+=4;  
  }
  cout << cadena2;
}

int main(){
  int persona;
  cout << "Escriba la posición de la persona: ";
  cin >> persona;
  escaleraDoble(persona);
  return 0;
}
