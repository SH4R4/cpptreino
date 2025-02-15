

#include <iostream>
using namespace std;

int main()
{
    cout<<"************************************"<< endl;
    cout<<"* Bem vindo ao jogo da advinhação! *"<< endl;
    cout<<"************************************"<< endl;
    
    int num_sec = 76;
   
   int chute;
   cout << "Qual seu chute?" << endl;
   cin >> chute;
   cout << "O valor do seu chute é: " << chute << endl;
   
   if ( chute == num_sec){
       cout << "Parabens, voce acertou o numero secreto!" << endl;
   } else if (chute > num_sec){
       cout <<"Seu chute foi maior que o numero a ser descoberto." << endl;
   }
   else{
       cout << "Seu chute foi menor que o numero a ser descoberto." << endl;
   }
}