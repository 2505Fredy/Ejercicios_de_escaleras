#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void linea(int numero){
  for (int i=0; i<4*numero-1; i++) cout << "-";
  cout << endl; return;
}

void defineMatriz(int numero){
  //Se define la matriz de 3x3 ejecutando la función defineMatriz(3) en el main.
  int matriz[numero][numero];
  //Se inicializa la matriz con caracteres del 1 al numero*numero(En este caso del 1 al 9).
  int i=1;
  for (int valor=0; valor<numero; valor++){
    for (int valor2=0; valor2<numero; valor2++) matriz[valor][valor2]= i++;
  }
  //Se muestra en pantalla(imprime) la matriz en formato de tablero.
  int fila=0;
  for (int i=0; i<2*numero-1; i++){
    if (i%2==0){ 
      int col=0;
      cout << " ";
      int value=1;
      for (int j=0; j<4*numero-1; j++){
        if (j%2==0) cout << " ";
        else{
          if (j==value){
            cout << matriz[fila][col];
            value+=4;
            if ((col+1)%numero==0)  cout << endl; 
            col++;
          }
          else cout << "|";
        }
      }      
    }
    else {
      fila++;
      linea(numero);
    }
  }
  return;
}

int main(){
  defineMatriz(3);
  return 0;
}
