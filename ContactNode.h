#pragma once
#ifndef CONTACTNODE_H
#define CONTACTNODE_H
#include <iostream>
#include <string>

using namespace std;

class ContactNode {	
private:
	string contactName;
	string contactPhoneNum;
	ContactNode* nextPointer;
public: 
	ContactNode(string ContactName, string ContactPhoneNum, ContactNode* nextPointer = NULL );
	ContactNode* GetNext();
	void InsertAfter(ContactNode* thisNode);
	string GetName() { return contactName; };
	string GetPhoneNumber() { return contactPhoneNum; };
	void PrintContactNode();
};

#endif