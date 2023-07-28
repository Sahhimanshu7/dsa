//Linked List implementation
// Single Linked Lists and Doubly linked lists
// Add, remove from beginning and end

#include<iostream>

struct Node {
    int data;
    Node* next;
};

class LinkedList{
    public:
        LinkedList(){head = nullptr;}

        void push_front(int data){
            Node *new_node = new Node();
            new_node -> data = data;
            new_node -> next = head;
            head = new_node;
        }

        void pop_front(){
            if(head == nullptr){
                return;
            }
            Node* old_head = head;
            head = head->next;
            delete old_head;
        }

        void Insert(int data){
            Node* temp = new Node();
            temp -> data = data;
            temp -> next = nullptr;
            if (head == nullptr)
            {
                head = temp;
                return;
            }
            Node* current = head;
            while(current->next != nullptr){
                current = current->next;
            }
            current->next= temp;
        }

        void Delete(){
            if (head == nullptr)
            {
                return;
            }
            if(head->next == nullptr)
            {
                delete head;
                head = nullptr;
                return;
            }
            
            Node* current = head;
            while (current->next != nullptr && current->next->next != nullptr)
            {
                current = current->next;
            }
            delete current->next;
            current->next = nullptr;
        }

        void Print(){
            while (head != nullptr)
            {
                std::cout<< head -> data;
                head = head -> next;
            }
            std::cout<<"\n";
        }
    private:
        Node* head;
};

int main(){
    LinkedList LL;
    int n,data;
    std::cout<<"Enter the number of elements\n";
    std::cin>> n;
    for (int i = 0; i < n; i++)
    {
        std::cout<<"Enter the number \n";
        std::cin>> data;
        LL.Insert(data);
    }
    LL.Delete();
    LL.Print();
}