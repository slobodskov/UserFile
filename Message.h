#pragma once 
#include <string>

class Message
{
	string _text;
	string _sender;
	string _receiver;
public:
	Message(string text, string sender, string receiver) : string _text(text), string _sender(sender), string _receiver(reciever){}
	~Message(){}
	friend fstream& operator >>(fstream& is, User& obj);
	friend ostream& operator <<(ostream& os, const User& obj);
};
