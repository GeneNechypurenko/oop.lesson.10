#pragma once
#include <iostream>

using namespace std;

class Client {

	int id;
	string name;
	int balance;
	static int count;

public:
	explicit Client();

	~Client();

	Client(const Client& object) = delete;

	void SetId(int id);
	void SetName(string name);
	void SetBalance(int balance);

	int GetId() const;
	string GetName() const;
	int GetBalance() const;
	static int GetCount();
};

