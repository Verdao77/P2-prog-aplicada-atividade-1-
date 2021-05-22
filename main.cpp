#include <iostream>
using namespace std;

int TrocaTroca (char *potMens,char *pontMensFim,char subC, char novC);

int main() {

 char mens[200], mensFim[200], Csub, Cnov;

 cout << "Informe a mensagem: ";
    cin.getline (mens,200);

 cout <<"informe o caracter a ser substituido: ";
 cin >> Csub;

 cout << "informe o novo caracter:";
 cin >> Cnov; 

 for (int i=0; i<200; i++) {
   mensFim[i] = mens[i]; 
   }

cout << " mensagem original:"<<mens <<endl;
cout << " mensagem alterada:"<<mensFim <<endl;
 cout << " quantidade de substituições:"<<mens <<endl;

 return 0;
 }

 int TrocaTroca (char *pontMens, char *pontMensFim, char subC, char novC) {

    int cont = 0;
    for (int i=0; i<200; i++){
      if (pontMens[i] == subC){
        pontMensFim[i] = novC;
        cont++;
        }
    }
    return cont;
    }








 
