#include <iostream>

using namespace std;

int main()
{

    int ultimo, penultimo, soma, n;
    ultimo = 1;
    penultimo = 0;

    cout << "Insira um numero para verificar se pertence a sequencia finonacci" << endl;
    cin >> n;

    while ( ultimo+penultimo < n) {

        soma = penultimo;
        penultimo = ultimo;
        ultimo = soma + ultimo;

    }
      if(ultimo+penultimo == n){
            cout << "O numero existe no fibonacci" << endl ;
      }
      else {
             cout << "O numero nao existe no fibonacci" << endl ;
      }

    return 0;
}
