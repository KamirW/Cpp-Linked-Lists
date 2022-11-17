#include "./headers/Node.h"

        template<class T> 
        Node<T>::Node(T data, Node<T>* next) : data(data), next(next) { }

        template<class T>
        Node<T>::Node(T data) : data(data), next(nullptr) { }
        
        template<class T>
        Node<T>::Node() : data(nullptr), next(nullptr) { }
        
