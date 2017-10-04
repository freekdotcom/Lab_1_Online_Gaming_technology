#include <WinSock2.h>
#include "Net.h"
#include <iostream>

#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")

void playerA(Net &net)
{
	char* ip = "127.0.0.1";
	//net.setupUDP(28000, ip);
	net.setupTCP(28000, ip);
	std::cout << std::endl << "IP: 127.0.0.1" << std::endl << "Port: 28000" << std::endl;
	while (1)
	{
		net.sendData(ip, 28001, "Hallo, ik ben iemand hahah");
	}
	
}

void playerB(Net &net)
{
	char* ip = "127.0.0.1";
	net.setupUDP(28001, ip);
	std::cout << std::endl << "IP: 127.0.0.1" << std::endl << "Port: 28001" << std::endl;
	while (1)
	{
		net.sendData(ip, 28000, "Hallo, ik ben iemand hahah");
	}
}

int main()
{
	Net net;
	net.initialise();

	std::string input;
	std::cin >> input;

	if (input == "a")
	{
		playerA(net);
	}
	else if (input == "b")
	{
		playerB(net);
	}
	system("PAUSE");
}

