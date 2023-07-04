// Copyright 2023 Alice Norris. Subject to MIT License.

#pragma once
#ifndef CONTACTNODE_H
#define CONTACTNODE_H
#include <iostream>
#include <string>

class ContactNode {
 private:
  std::string name;
  std::string phone_num;
  ContactNode* next;

 public:
  ContactNode(std::string name, std::string phone_num, ContactNode* next = NULL);
  ContactNode* GetNext();
  void InsertAfter(ContactNode* node);
  std::string GetName() { return name; }
  std::string GetPhoneNumber() { return phone_num; }
  void PrintContactNode();
};

#endif
