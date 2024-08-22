#include <iostream>
#include <stdexcept>
using namespace std;

template <typename t>
class list{
    struct Node{
        Node* next;
        Node* prev;
        t data;
        public:
        Node(t value) : next(nullptr), prev(nullptr), data(value) {}
    };
    
    Node* head;
    Node* tail;
    size_t size;
    
    
    public:
    list() : head(nullptr), tail(nullptr), size(0) {}
    
    void push_b(const t& value){
        Node* node = new Node(value);
        if(tail){
            tail->next = node;
            node->prev = tail;
            tail = node;
        }else{
            head = tail = node;
        }
        size++;
    }
   
    void push_f(t value){
       Node* node = new Node(value);
       if(head) {
           head->prev = node; 
           node->next = head;
           head = node;
       }else{
           head = tail = node;
       }
       size++;
    }
    
    t& operator[](const int pos){
        Node* temp = head;
        if(pos<0 || pos>=size){
            throw out_of_range("index is out of range\n");
        }
        for (int i=0; i<pos; i++){
                temp = temp->next;
            }
        return temp->data;
    }
        
    void display(){
        Node* temp = head;
        while(temp){
            cout << temp->data << "-";
            temp = temp->next;
        }
        cout << "nothing\n";
    }
};

int main(){
    list<int> li;
    li.push_b(6);
    li.push_b(8);
    li.display();
    cout << "operator\n";
    cout << "li[1] " << li[1] << endl;
    li[1]=2;
    cout << "li[1] " << li[1] << endl;
    li.display();
    return 0;
}