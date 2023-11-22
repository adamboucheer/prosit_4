#include <iostream>
#include "Emetteur.h"
#include "Recepteur.h"

Emetteur::Emetteur()
{
	this->message = "Bonjour et bienvenue sur la radio ";
}

Emetteur::Emetteur(const char* mess)
{
	this->message = mess;
}

void Emetteur::diffuser()
{
	e = &Recepteur::ecouter;
	e(this->message);
}
