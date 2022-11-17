template <class T>
class Node {
    public:
        T data;
        Node* next;
        
        Node(T data, Node* next) : data(data), next(next) {
            // this->data = data;
            // this->next = next;
        }

        Node(T data) : data(data), next(nullptr) {
            // this->data = data;
            // this->next = nullptr;
        }

        Node() : data(nullptr), next(nullptr) {
            // this->data = nullptr;
            // this->next = nullptr;
        };
};