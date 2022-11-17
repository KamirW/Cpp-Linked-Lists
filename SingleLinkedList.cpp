#include <iostream>
#include <stdexcept>
#include "Node.cpp"

/**
 * @author Kamir Walton
 * This class is meant to implement the Linked List data structure 
*/
template <class T> class Node;
template <class T> class SingleLinkedList {
    private:

        Node<T>* head;
        short size {};


    public:
        SingleLinkedList() : head(nullptr) {
            
        }

        ~SingleLinkedList() {
        }

        /**
         * Adds an item to the linked list
        */
        void add(T item) {
            Node<T>* newNode = new Node(item);

            if(head == nullptr) {
                head = newNode;
                size++;
                return;

            }

            Node<T>* pointer = head; 

            while (pointer->next != nullptr) {
            pointer = pointer->next;
            }

            pointer->next = newNode;
            size++;       
        }

        T get(int index) {
            if(index < 0 || size <= index) {
                throw std::out_of_range("Index out of Bounds");
                return nullptr;
            }

            Node<T>* pointer = head;
            int i = 0;

            while(i < index) {
                pointer = pointer->next;
                i++;
            }

            return pointer->data;
        }

        int indexOf(T target) {
            Node<T>* pointer = head;
            int index = 0;

            while(index < size) {
                if(pointer->data == target) {
                    return index;
                }

                pointer = pointer->next;
                index++;
            }

            return -1;
        }

        /**
         * Prints out the linked list
        */
        void print() {
            Node<T>* pointer = head;

            if(head == nullptr) {
                std::cout << "List is empty" << std::endl; 
                return;
            }

            while(pointer != nullptr) {
                std::cout << pointer->data << std::endl;
                pointer = pointer->next;
            }
        }

        T remove(int index) {
                Node<T>* pointer = head;
                int i = 0;

                while(i < index - 1) {
                    pointer = pointer->next;
                    i++;
                }

                Node<T>* removed = pointer->next;
                pointer->next = pointer->next->next;
                size--;

                return removed->data;
            }
};
