#include <iostream>
using namespace std;

template <typename T>
class Node{
public:
    T data;
    Node* next;

    Node(T value){
        data=value;
        next=nullptr;
    }
};

template <typename T>
class LinkedList{
private:
    Node<T>* head;
public:
    LinkedList(){
        head=nullptr;
    }

    void appendInFront(T data){
        Node<T>* newNode = new Node(data);
        newNode->next=head;
        head=newNode;
    }

    void append(T data){
        Node<T>* newNode = new Node(data);
        if (head==nullptr){
            head=newNode;
        }else{
            Node<T>* current=head;
            while(current->next!=nullptr){
                current=current->next;
            }
            current->next=newNode;
        }
    }

    void pop(){
        Node<T>* current=head;
        while (current->next->next!=nullptr){
            current=current->next;
        }
        Node<T>* del=current->next->next;
        current->next=nullptr;
        delete del;
    }

    void display(){
        Node<T>* current = head;
        while (current != nullptr){
            cout<<current->data<<"->";
            current=current->next;
        }
        cout<<"Null"<<endl;
    }
};

int main(){
    LinkedList<double> ll;
    ll.append(5.0);
    ll.append(6);
    ll.append(6);
    ll.append(6);
    ll.append(68);
    ll.display();
    ll.pop();
    ll.display();

    return 0;
}