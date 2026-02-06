#include <iostream>
using namespace std;


struct Node {
    int value;
    Node* next;
};


void insert(Node*& head, int val) {
    Node* newNode = new Node{val, nullptr};
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}


void display(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


int sum(Node* head) {
    int total = 0;
    while (head) {
        total += head->value;
        head = head->next;
    }
    return total;
}


void deleteMax(Node*& head) {
    if (!head) return;

    Node *current = head, *prev = nullptr, *maxNode = head, *maxPrev = nullptr;

    while (current) {
        if (current->value > maxNode->value) {
            maxNode = current;
            maxPrev = prev;
        }
        prev = current;
        current = current->next;
    }

    if (!maxPrev) { // Max is at head
        head = head->next;
    } else {
        maxPrev->next = maxNode->next;
    }
    delete maxNode;
}

// Function to concatenate two lists
void concatenate(Node*& head1, Node*& head2) {
    if (!head1) {
        head1 = head2;
        return;
    }
    Node* temp = head1;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = head2;
}

// Function to reverse the linked list
void reverse(Node*& head) {
    Node *prev = nullptr, *current = head, *next = nullptr;
    while (current) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}



int main() {
    Node* list1 = nullptr;
    Node* list2 = nullptr;
    int value, k;

    // Create first linked list
    cout << "Enter elements for first list (-1 to stop): "<<endl;
    while (cin >> value && value != -1) {
        insert(list1, value);
    }

    // Display sum
    cout << "Sum of elements: " << sum(list1) << endl;

    // Delete max element and display
    deleteMax(list1);
    cout << "After deleting max element: ";
    display(list1);

    // Create second linked list
    cout << "Enter elements for second list (-1 to stop): ";
    while (cin >> value && value != -1) {
        insert(list2, value);
    }

    // Concatenate lists
    concatenate(list1, list2);
    cout << "After concatenation: ";
    display(list1);

    // Reverse list
    reverse(list1);
    cout << "After reversing: ";
    display(list1);

    /*// Rotate list by k positions
    cout << "Enter k for rotation: ";
    cin >> k;
    rotate(list1, k);
    cout << "After rotating: ";
    display(list1);*/

    return 0;
}
