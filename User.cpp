#include "User.h"
#include <fstream>
#include <stdio.h>
#include <iostream>

using namespace std;

fstream& operator >>(fstream& is, User& obj)
{
	is >> obj._name;
	is >> obj._login;
	is >> obj._pass;
	return is;
}

ostream& operator <<(ostream& os, const User& obj)
{
	os << obj._name;
	os << ' ';
	os << obj._login;
	os << ' ';
	os << obj._pass;
	return os;
}
