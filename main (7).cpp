#include<iostream>
#include<string>
using namespace std;

const string PALSEC = "nitrato De Potassio";

bool letex(char chute){
    for (int i = 0; i < PALSEC.size(); i++){
        if(chute == PALSEC[i]){
            return true;
        }
    }
    return false;
}

int main () {
	cout <<PALSEC << endl;
	
	bool na = true;
	bool nf = true;
	
	while(na && nf){
	    char chute;
	    cin >> chute;
	    
	    if(letex(chute)){
	        cout << "Você acertou! Seu chute esta na palavra" << endl;
	    } else{
	        cout << "Voce errou! Seu chute nao esta na palavra" << endl;
	    }
	}
}