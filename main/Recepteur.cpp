#include "Recepteur.h"
typedef void (*evt)(const char*);
evt e;

void Recepteur::ecouter(const char* message)
{
	std::cout << message << std::endl;
}
