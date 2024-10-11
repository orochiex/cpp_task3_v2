#include <iostream>
#include "DoublyLinkedList.h"

int main() {
    DoublyLinkedList<int> intList;
    intList.append(10);
    intList.append(20);
    intList.append(30);

    std::cout << "Integer список:" << std::endl;
    for (int i = 0; i < intList.getSize(); ++i) {
        std::cout << intList[i] << " ";
    }
    std::cout << std::endl;

    DoublyLinkedList<std::string> stringList;
    stringList.append("Hello");
    stringList.append("world");
    stringList.append("!");

    std::cout << "String список:" << std::endl;
    for (int i = 0; i < stringList.getSize(); ++i) {
        std::cout << stringList[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
