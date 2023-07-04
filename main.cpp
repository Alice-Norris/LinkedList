// Copyright 2023 Alice Norris. Subject to MIT License.
#include "ContactNode.h"

int main() {
  std::string name;
  std::string phone_num;
  ContactNode* head_node = new ContactNode("Head Object", "0");
  ContactNode* curr_node = head_node;
  // Get three contacts of information from user, turning each into a contact
  // node, and linking them.
  for (int i = 0; i < 3; i++) {
    std::cout << "Person " << i + 1 << std::endl;
    std::cout << "Enter name:" << std::endl;
    getline(std::cin, name);
    std::cout << "Enter phone number:" << std::endl;
    getline(std::cin, phone_num);
    std::cout << "You entered: " << name << ", " << phone_num << std::endl;
    ContactNode* newContact = new ContactNode(name, phone_num);
    curr_node->InsertAfter(newContact);
    curr_node = newContact;
  }

  curr_node = head_node;

  // Printing contact list.
  std::cout << "CONTACT LIST" << std::endl;
  while (curr_node != nullptr) {
    curr_node = curr_node->GetNext();
    if (curr_node != nullptr) {
      curr_node->PrintContactNode();
    }
  }
  return 0;
}
