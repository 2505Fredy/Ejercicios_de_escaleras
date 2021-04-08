#include <iostream>
using namespace std;

void linea(){
  for (int i=0; i<11; i++) cout << "-";
  cout << endl; return;
}

void tablero(){
  int valor=1;
  for (int i=0; i<5; i++){
    if (i%2==0){ 
      for (int j=0; j<10; j++){
        if (j%2==0) cout << " ";
        else{
          if (j==1 || j==5 || j==9){
            cout << valor;
            if (valor%3==0) cout << endl; valor++;
          }
          else cout << "|";
        }
      }      
    }
    else linea();
  }
}

int main(){
  tablero();
  return 0;
}
