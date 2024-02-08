#include "User.h"
#include "Message.h"
#include <fstream>
#include <iostream>
#include <filesystem>
using namespace std;
namespace fs = std::filesystem;

int main()
{
	User obj("Dima", "user_1", "11111");
	User obj2("George", "user_2", "22222");
	User obj3("Sergey", "user_3", "33333");
	Message mes1("Hello", "Dima", "Sergey");
	Message mes2("Hello", "Sergey", "George");
	Message mes3("Hello", "George", "Dima");

	ofstream userfile = std::ofstream("User.txt");
	fs::permissions("User.txt",fs::perms::owner_all,fs::perm_options::add);
	ofstream mesfile = std::ofstream("Message.txt");
	fs::permissions("Message.txt",fs::perms::owner_all,fs::perm_options::add);
	userfile << obj << endl;
	userfile << obj2 << endl;
	userfile << obj3 << endl;
	mesfile << mes << endl;
	mesfile << mes2 << endl;
	mesfile << mes3 << endl;
	userfile.seekg(0, ios_base::beg);
	userfile >> obj;
	cout << obj << endl;
	userfile >> obj2;
	cout << obj2 << endl;
	usfile >> obj3;
	cout << obj3 << endl;
	mesfile.seekg(0, ios_base::beg);
	mesfile >> mes;
	cout << mes << endl;
	mesfile >> mes2;
	cout << mes2 << endl;
	mesfile >> mes3;
	cout << mes3 << endl;
	return 0;
}