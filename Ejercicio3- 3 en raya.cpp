#include <iostream>
using namespace std;

void linea(int numero){
  for (int i=0; i<4*numero-1; i++) cout << "-";
  cout << endl; return;
}

void defineMatriz(int numero, int elegido){
  //Se define la matriz de 3x3 ejecutando la función defineMatriz(3).
  char matriz[numero][numero];
  //Se inicializa la matriz con caracteres del 1 al numero*numero(En este caso del 1 al 9).
  char i='1';
  for (int valor=0; valor<numero; valor++){
    for (int valor2=0; valor2<numero; valor2++) matriz[valor][valor2]= i++;
  }
  //Asigna el valor de "X" a la posición escogida. Esto debido a que recibo como parámetro una posición escogida por el usuario.
  for (int i=0; i<numero; i++){
    for (int j=0; j<numero; j++){
      if (matriz[i][j]==elegido) matriz[i][j]='X';
    }
  }
  //Se muestra en pantalla(imprime) la matriz. Como ve lo hice todo dentro de una sola función, debido a que me genera muchos errores al pasar como parámetros un matriz. Al final la función hace lo que se pide
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
    }
    else {
      fila++;
      linea(numero);
    }
  }
  return;
}

int main(){
  const int valor=3; //Le asigné este valor porque en el 3 en raya es constante el número de filas y columnas y al trabajar con matrices del tipo char para su valor 'X', luego del 9 toma símbolos como valores
  char elegido;
  cout << "Escoge una posición en el tablero: " << endl; //Debe ser un número entre 1 y el número de filas o columnas al cuadrado; en este caso entre 1 y 9. Consideramos que el usuario ingresa los valores solicitados
  cin >> elegido;
  defineMatriz(valor, elegido);
  return 0;
}
