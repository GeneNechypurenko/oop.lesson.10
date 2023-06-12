#include "Client.h"

int Client::count = 0;

Client::Client() 
	:id{0}, name{""}, balance{0}{}

Client::~Client() {

	count--;
}

void Client::SetId(int id) {

	this->id = id;
}

void Client::SetName(string name) {

	this->name = name;
}

void Client::SetBalance(int balance) {

	this->balance = balance;
}

int Client::GetId()const {

	return id;
}

string Client::GetName() const {

	return name;
}

int Client::GetBalance() const {

	return balance;
}

int Client::GetCount() {

	return count;
}
