#include <iostream>
using namespace std;

void escoger(){
  char letra;
  cout << "Escoge una letra entre 'X' u 'O': ";
  cin >> letra;
  while (true){
    if (letra=='X'|| letra=='O') break;
    cout << "Escoge una letra entre 'X' u 'O': ";
    cin >> letra;
  }
  cout << "Usted escogió la letra " << letra << endl;
  return;
}

int main(){
  escoger();
  return 0;
}
