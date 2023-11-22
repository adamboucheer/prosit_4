#include <iostream>
#include "Emetteur.h"
#include "Recepteur.h"

using namespace std;

typedef void (*pf)(void);
pf* index;

void fSkyRock(void){
    Emetteur SkyRock("Bonjour bienvenue sur Skyrock");
    SkyRock.diffuser();
}
void fRTL(void) {
    Emetteur RTL("Bonjour bienvenue sur RTL");
    RTL.diffuser();
}

void fFunRadio(void) {
    Emetteur FunRadio("Bonjour bienvenue sur FunRadio");
    FunRadio.diffuser();
}


int main()
{
    int nombre;
    pf tabradio[3];
    tabradio[0] = &fSkyRock;
    tabradio[1] = &fRTL;
    tabradio[2] = &fFunRadio;
    cout << "A combien de radio voulez vous vous abonnez ?" << endl;
    cin >> nombre;
    index = new pf[nombre];
    for (int i=0; i < nombre; i++) {
        int ii;
        cout << "A quelle radio voulez vous abonnez en " << i+1 << "e" << endl;
        cout << "0 = SkyRock ; 1 = RTL ; 2 = FunRadio" << endl;
        cin >> ii;
        index[i] = tabradio[ii];
    }
    for (int i=0; i < nombre; i++) {
        index[i]();
    }

}