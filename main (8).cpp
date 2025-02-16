#include<iostream>
#include<string>
using namespace std;

const string PALSEC = "nitrato de potassio";

bool letex(char chute){
    for (char letra: PALSEC){
        if (chute == letra){
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