
#include <iostream>
using namespace std;

int main()
{
    cout<<"************************************"<< endl;
    cout<<"* Bem vindo ao jogo da advinhação! *"<< endl;
    cout<<"************************************"<< endl;
    
    const int NUM_SEC = 76;
    
    bool nacertou = true;
    int tentativas = 0;
    
   while(nacertou){
       tentativas++;
       cout << "Tentativa " << tentativas << endl;
    int chute;
   cout << "Qual seu chute? ";
   cin >> chute;
   
   cout << "O valor do seu chute é: " << chute << endl;
   
   bool acertou = chute == NUM_SEC;
   bool maior = chute > NUM_SEC;
   
   if (acertou){
       cout << "Parabens, voce acertou o numero secreto!" << endl;
       nacertou = false;
   } else if (maior){
       cout <<"Seu chute foi maior que o numero a ser descoberto." << endl;
   }
   else{
       cout << "Seu chute foi menor que o numero a ser descoberto." << endl;
   }
   
  }
   cout << "Jogo finalizado."<< endl;
   cout << "Você precisou de " << tentativas << " tentativas para acertar o numero secreto." << endl;
}