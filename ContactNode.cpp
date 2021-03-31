#include "ContactNode.h"

ContactNode::ContactNode(string contactName, string contactPhoneNum, ContactNode* nextPointer) {
	this->contactName = contactName;
	this->contactPhoneNum = contactPhoneNum;
	this->nextPointer = nextPointer;
}

void ContactNode::InsertAfter(ContactNode* existingNode) {
	ContactNode* tempNext = NULL; //declare pointer to temporarily hold address

	tempNext = this->nextPointer; //temporarily store the address of the existing node's next pointer
	this->nextPointer = existingNode; //change this node's next pointer to address of new node
	existingNode->nextPointer = tempNext; //give address of original next pointer to new node
}

ContactNode* ContactNode::GetNext() {
	return this->nextPointer; //return pointer to next COntact Node
}

void ContactNode::PrintContactNode() {
	cout << "Name: " << this->contactName << endl;
	cout << "Phone number: " << this->contactPhoneNum << endl << endl;
}