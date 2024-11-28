#include "SinglyLinkedList.cpp"

int main() {
    SinglyLinkedList<int> l1;
    l1.addATFront(5);
    l1.addATFront(10);
    l1.addAtEnd(20);
    l1.addATFront(30);

    l1.removeFirst();
    l1.removeLast();

    l1.displayList();

    std::cout << "Size of list: " << l1.size() << "\n";

    std::cout << "Enter the number to find: ";
    int val;
    std::cin >> val;
    if (l1.find(val) != nullptr) {
        std::cout << "Entered value is on the list.\n";
    }
    else {
        std::cout << "Entered value is not on the list.\n";
    }

    return 0;
}
