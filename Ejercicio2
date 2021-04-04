#include <iostream>
#include <string>
using namespace std;

void imprimirescalera(int escalon, int persona){
  if (-escalon<=persona<=escalon){ 
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
    system("clear");  
  }

  else { cout << "El valor ingresado no es válido\n"; return;}
}
Hice lo que ud. me sugirió profesor; como veo que cada animación debe ser con la escalera completa, creé otra función para imprimirlo y borrarlo. No tengo idea de ralentizarlo. 

La función imprimirescalera() imprime la persona en la posición indicada.
La función escaleraDoble() ordena a imprimirescalera() variando la posición.

void escaleraDoble(int persona){
  if (persona>0){ 
    for (int persona1= persona; persona1>= -persona; persona1--) imprimirescalera(3, persona1);
    for (int persona1= 1-persona; persona1<= persona; persona1++) imprimirescalera(3, persona1);
  }
  else {
    for (int persona1= persona; persona1<= -persona; persona1++) imprimirescalera(3, persona1);
    for (int persona1= -persona-1; persona1>= persona; persona1--) imprimirescalera(3, persona1);
  }
}

int main(){
  int persona;
  cout << "Escriba la posición de la persona: ";
  cin >> persona;
  escaleraDoble(persona);
  return 0;
}
