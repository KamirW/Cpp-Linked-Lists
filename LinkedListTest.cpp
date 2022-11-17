#include <iostream>
#include <stdexcept>
#include "SingleLinkedList.cpp"
int main() {
    SingleLinkedList<std::string> list;

    list.add("First");
    list.add("Second");
    list.add("Third");
    list.print();

    try{
        std::cout << "---------------------\n"
                << list.get(2) << std::endl; 
                
    } catch(std::out_of_range e) {
        std::cerr << "Error: Index Out of Range." << std:: endl;
        return -1;
    }
    

    std::cout << list.indexOf("Third") << std::endl;

    list.remove(1);

    list.print(); 

}