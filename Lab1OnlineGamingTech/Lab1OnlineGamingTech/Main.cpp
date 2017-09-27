#include "Main.h"
#include <iostream>
#include <string>

using namespace std;

Main::Main()
{
	_net.initialise();
	string input;
	cout << "What is da input?" << endl;
	getline(cin, input);

	if (input == "a")
		Main::PlayerA();
	else if (input == "1")
		exit = 1;
	else
		Main::PlayerB();

}


Main::~Main()
{
}

void Main::PlayerA() {
	
	_net.setupUDP(PORT_A, ip);
	cout << _net.getSenderIP() << "  " <<  _net.getSenderPort() << endl;
}

void Main::PlayerB() {
	_net.setupUDP(PORT_B, ip);
	cout << _net.getSenderIP() << "  " <<  _net.getSenderPort() << endl;

}

int main() {
	do
	{
		Main::Main();
	} while (exit == 0);
	return 0;
}
