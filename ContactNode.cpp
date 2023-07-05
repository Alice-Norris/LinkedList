// Copyright 2023 Alice Norris. Subject to MIT License.
#include "ContactNode.h"

// ContactNodes contain two basic pieces of information and an address
// to the next node, if any.
ContactNode::ContactNode(std::string name, std::string phone_num,
  ContactNode* next) {
  this->name = name;
  this->phone_num = phone_num;
  this->next = next;
}

// Inserts node after the supplied node, adding the next node's address.
void ContactNode::InsertAfter(ContactNode* node_ptr) {
  ContactNode* new_next = NULL;  // Pointer to temporarily hold address.
  new_next = this->next;  // Store address of the existing node's next pointer.
  this->next = node_ptr;  // Change this node's next to address of new node.
  node_ptr->next = new_next;  // Give original next node address to new node.
}

ContactNode* ContactNode::GetNext() {
  return this->next;  // Return pointer to next Contact node.
}

void ContactNode::PrintContactNode() {
  std::cout << "Name: " << this->name << std::endl;
  std::cout << "Phone number: " << this->phone_num << std::endl << std::endl;
}
