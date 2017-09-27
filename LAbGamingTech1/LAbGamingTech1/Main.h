#pragma once
#include <winsock2.h>
#include "Net.h"
#define PORT_A 28000
#define PORT_B 28002

class Main
{
public:

	Net _net;

	int exit = 0;
	char * ip = "127.0.0.1";

	Main();
	void PlayerA();
	void PlayerB();
	~Main();
};

