class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class MyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    MyLinkedList() { head = tail = nullptr; }

    int get(int index) {
        int idx = 0;
        Node* temp = head;

        while (temp != nullptr) {
            if (index == idx) {
                return temp->data;
            }
            temp = temp->next;
            idx++;
        }

        return -1;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void addAtIndex(int index, int val) {
        if (index < 0) {
            return;
        }

        int length = 0;
        Node* temp = head;

        while (temp != nullptr) {
            length++;
            temp = temp->next;
        }

        if (index > length) {
            return;
        }

        if (index == 0) {
            addAtHead(val);
            return;
        }

        if (index == length) {
            addAtTail(val);
            return;
        }

        Node* newNode = new Node(val);
        temp = head;

        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteAtIndex(int index) {
        if (head == nullptr || index < 0) {
            return;
        }

        if (index == 0) {
            Node* temp = head;
            head = head->next;

            if (temp == tail) {
                tail = nullptr;
            }

            delete temp;
            return;
        }

        Node* temp = head;

        for (int i = 0; i < index - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }

        if (temp == nullptr || temp->next == nullptr) {
            return;
        }

        if (temp->next == tail) {
            tail = temp;
        }

        Node* deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */