#include "ContactNode.h"

using namespace::std;

int main() {
	string contactName;
	string contactPhoneNum;
	ContactNode* HeadNode = new ContactNode("Head Object", "0");
	ContactNode* currNode = HeadNode;
	for (int i = 0; i < 3; i++) {
		cout << "Person " << i + 1 << endl;
		cout << "Enter name:" << endl;
		getline(cin, contactName);
		cout << "Enter phone number:" << endl;
		getline(cin, contactPhoneNum);
		cout << "You entered: " << contactName << ", " << contactPhoneNum << endl << endl;
		ContactNode* newContact = new ContactNode(contactName, contactPhoneNum);
		currNode->InsertAfter(newContact);
		currNode = newContact;
	}

	currNode = HeadNode;
	cout << "CONTACT LIST" << endl;
	while (currNode != nullptr) {

		currNode = currNode->GetNext();
		if (currNode != nullptr) {
			currNode->PrintContactNode();
		}
		
	}
	return 0;
}