template <class T>
class Node {
    public:
        T data;
        Node* next;
        
        Node(T data, Node* next) {
            this->data = data;
            this->next = next;
        }

        Node(T data) {
            this->data = data;
            this->next = nullptr;
        }

        Node() {
            this->data = nullptr;
            this->next = nullptr;
        };
};