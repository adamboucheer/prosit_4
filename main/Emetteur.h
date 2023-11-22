#pragma once

class Emetteur
{
private:
	const char* message;
	typedef void (*evt)(const char*);
	evt e;
public:
	Emetteur();
	Emetteur(const char* mess);
	void diffuser();
};