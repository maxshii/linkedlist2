#include <iostream>
#include "student.h"
#include "node.h"

int main() {
  Student* john = new Student((char*)("John"), (char*)("Smurf"), 12345, 1.2);
  Student* joe = new Student((char*)("Joe"), (char*)("Kraker"), 12346, 2.5);

  Node* n = new Node(john);
  Node* n2 = new Node(joe);
  n->setNext(n2);

  std::cout  << "First node student name: " <<(n->getStudent()->first) << "\nFirst node next: " << n->getNext();
  std::cout  << "\nFirst node next student name: " <<(n->getNext()->getStudent()->first);

  delete n;

} 