#include <iostream>
#include <list>
using namespace std;

class LinkedList{
public:
    list<int> llist;

    void append(int data){
        llist.push_back(data);
    }

    void display(){
        auto it=llist.begin();
        while (it != llist.end()){
            cout << *it<<"->";
            it++;
        }cout<<"Null"<<endl;
    }

    void pop(){
       llist.pop_back();
    }
};

int main(){
    LinkedList ll;
    ll.append(5);
    ll.append(7);
    ll.display();
    ll.pop();
    ll.pop();
    ll.display();
    ll.pop();
}