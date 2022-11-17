#pragma once

template <class T>
class Node {
    public:
        T data;
        Node* next;
        
        Node(T data, Node* next);

        Node(T data);

        Node();
};