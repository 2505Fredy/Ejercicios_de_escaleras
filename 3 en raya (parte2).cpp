#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

void escoger(char &user, char &comp){
  cout << "Escoge una letra entre 'X' u 'O': ";
  cin >> user;
  while (true){
    if (user=='X'|| user=='O') break;
    cout << "Escoge una letra entre 'X' u 'O': ";
    cin >> user;
  }
  if (user=='X') comp='O';
  else if (user=='O') comp='X';
  cout << "Usted escogió la letra " << user << endl;
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

bool noPertenece(char lista[], char &elegido){
  bool valor1;
  for (int i=0; i<9; i++){
    if (lista[i]!=elegido) {
      valor1 = true;
      continue;
    }
    valor1 = false;
    break;
  }
  return valor1;
}

void validacion(char matriz[][3], char &elegido){
  int valid = elegido - 48;
  cout <<"Escoge una posición en el tablero entre 1 y 9,\nexcepto las marcadas con 'X' u 'O': " << endl;
  cin >> valid;
  if (valid>=1 && valid<=9){
    elegido = valid + 48;
    return;
  }
  else {
    cout << "Error los datos ingresados no son válidos, vuelva a iniciar." << endl;
    exit(-1);
  }
}

void linea(int numero){
  for (int i=0; i<4*numero-1; i++) cout << "-";
  cout << endl; return;
}

void marcaPosicion(char matriz[][3], int elegido, int numero, char user){
  for (int i=0; i<numero; i++){
    for (int j=0; j<numero; j++){
      if (matriz[i][j]==(char)elegido) matriz[i][j] = user;
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

bool verificarTablero(char matriz[][3]){
  if ((matriz[1][1]== matriz[2][2] && matriz[2][2]== matriz[0][0]) || (matriz[2][0]== matriz[1][1] && matriz[1][1]== matriz[0][2])){
    return true;
  }
  for (int i=0; i<3; i++){
    if (matriz[i][0]== matriz[i][1] && matriz[i][1]== matriz[i][2]){
      return true;
    }
    else if (matriz[0][i]== matriz[1][i] && matriz[1][i]== matriz[2][i]){
      return true;
    }
  }
  return false;
}

char aleatorio(){
  char aleat;
  aleat= '1' + random()%9;
  return aleat;
}

int main(){
  srand(time(NULL));
  char lista[9]{'1','2','3','4','5','6','7','8','9'};
  char user, comp;
  escoger(user, comp);
  char matriz[3][3];
  inicializar(matriz);
  char elegido;
  
  imprimeTablero(matriz, 3);
  
  for (int i=0; i<9; i++){
    if (i%2==0){
      validacion(matriz, elegido);
      while (noPertenece(lista, elegido)){
        validacion(matriz, elegido);    
      }
      marcaPosicion(matriz, elegido, 3, user);
      lista[elegido-49]=user;
      cout << "Marcas tú: \n" ;
      imprimeTablero(matriz, 3);
      if (verificarTablero(matriz)){
        cout << "GANASTE, felicitaciones.\n";
        exit(-1);
      }
    }  
    else{
      char casual = aleatorio();
      while (noPertenece(lista, casual)){
        casual = aleatorio();  
      }
      marcaPosicion(matriz, casual, 3, comp);
      lista[casual-49]=comp;
      cout <<  "Marca el sistema:\n";
      imprimeTablero(matriz, 3);
      if (verificarTablero(matriz)){
        cout << "PERDISTE, suerte a la próxima.\n";
        exit(-1);
      }
    }  
  }
  cout << "Empataron, vuelve a intentarlo.\n";
}
