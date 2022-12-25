#include <bits/stdc++.h>

 class Node{
  public:  
    int data;
    Node* next; 
};

class CircularNode{
  public:
    int data_circular;
    Node* ne;
    Node* pr;
};

class Circular{
  public :
    Node* last;
    CircularNode* lastCircular;

    Circular(Node* h, CircularNode* n)
      :last{h}, lastCircular{n}{

      };

    ~Circular(){
      std::cout << "Destructor Called!" << std::endl;
    }

    void InsertionSingly(int new_data){
      Node* temp = new Node();
      if(last == NULL){
        std::cout << "List is empty, Appending data to the list!" << std::endl;
        temp->data = new_data;
        temp->next = temp;
        return;
      }
      temp->data = new_data;
      temp->next = last->next;
    }

    void InsertionDoubly(int new_data){
      CircularNode* t = new CircularNode();
      if(lastCircular==NULL){
        std::cout << "List is Empty, Appending data to the list!" << std::endl;
        t->data_circular = new_data;
        lastCircular = t;
        return;
      }
      
    }
};