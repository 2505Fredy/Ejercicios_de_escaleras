#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void linea(int numero){
  for (int i=0; i<4*numero-1; i++) cout << "-";
  cout << endl; return;
}

void inicializar(char matriz[][3]){
  char valor='1';
  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++) {
      matriz[i][j] = valor;
      valor++;
    }
  }
}

void imprimeTablero(char matriz[][3], int numero){
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
}

int main(){
  char matriz[3][3];
  inicializar(matriz);
  imprimeTablero(matriz, 3);
}
