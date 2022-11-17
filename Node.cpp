template <class T>
class Node {
    public:
        T data;
        Node* next;
        
        Node(T data, Node* next) : data(data), next(next) { }

        Node(T data) : data(data), next(nullptr) { }

        Node() : data(nullptr), next(nullptr) { };
};