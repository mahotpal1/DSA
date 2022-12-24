#include <bits/stdc++.h>

class Node{
  public :
    int data;
    Node *prev;
    Node *next;
};

class Insertion{
  public :
    Node* head;
    Insertion(Node* head_ref)
      :head{head_ref}{

      };

    ~Insertion(){
      std::cout << "Destructor Called!" << std::endl;
    }

    //Insertion At Front Location of Linked List
    void InsertionFront(int new_data){
      Node* new_node = new Node();
      new_node->data = new_data;
      new_node->next = head;
      new_node->prev = NULL;
      if(head != NULL){
        //Its the old head element
        head->prev = new_node;
      }
      head = new_node;
    }

    void display(){
      Node* temp = head;
      while(temp != NULL){
        std::cout << temp->data << " ";
        temp = temp->next;
      }
      std::cout << std::endl;
    }
    void deletion(Node* del){
      if(head == NULL || del == NULL){
        std::cout << "Empty List or Node is empty!" <<std::endl;
        return;
      }
      if(head == del){
        head = del->next;
      }
      if(del->next != NULL){
        del->next->prev = del->prev;
      }
      if(del->prev != NULL){
        del->prev->next = del->next;
      }
      free(del);
    }
};


int main(){
  Node* head = NULL;
  Insertion I1 = Insertion(head);
  I1.InsertionFront(3);
  I1.InsertionFront(6);
  I1.InsertionFront(7);
  I1.deletion(I1.head->next);
  I1.display();
  return 0;
}