#include <iostream>
#include <string>
#include "IRServeurUDP.h"
#include "IRJournalLumineux.h"


using namespace std;

void dechiffrement(std::string messageChiffre, std::string & message) 
{ 
 std::string cle = "CyberSecurite"; 
 for(int i = 0 ; i<messageChiffre.length() ; i++) 
 { 
 message[i] = messageChiffre[i] ^ cle[i%cle.length()]; 
 } 
}

int main()
{
    
    std::string trameChiffree;
    IRServeurUDP serveur; 
    serveur.OuvrirLaSocketDEcoute(4000);

    while(true){
    
    serveur.RecevoirUnMessage(trameChiffree);   
    IRJournalLumineux journal;
    std::string trameDechiffree = trameChiffree;
    dechiffrement(trameChiffree, trameDechiffree);
    journal.OuvrirPortSerie("/dev/ttyUSB0");
    journal.EnvoyerTrame(trameDechiffree);
    journal.FermerPortSerie();
    
    }

    serveur.FermerLaSocket();
    
}
