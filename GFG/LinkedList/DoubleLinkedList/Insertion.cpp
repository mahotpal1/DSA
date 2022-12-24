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

    void InsertionAfterGivenNode(Node *prev_node, int new_data){
      if(prev_node == NULL){
        std::cout << "Passed Node is Null, Data cannot be appended!" << std::endl;
        return;
      }
      Node* new_node = new Node();
      new_node->data = new_data;
      new_node->next = prev_node->next;
      prev_node->next = new_node;
      new_node->prev = prev_node;
      //point previous of next to new node;
      if(new_node->next != NULL){
        new_node->next->prev = new_node; 
      }
    }

    void display(){
      Node* temp = head;
      while(temp != NULL){
        std::cout << temp->data << " ";
        temp = temp->next;
      }
      std::cout << std::endl;
    }

    void AtEnd(int new_data){
      Node* temp = head;
      Node* new_node = new Node();
      new_node->data = new_data;
      new_node->next = NULL;
      std::cout << "Check1" << std::endl;
      if(head == NULL){
        new_node->prev = NULL;
        head = new_node;
        return;
      }
      while(temp->next != NULL)
      {
        temp = temp->next;
        std::cout << "Check 3" << std::endl;
      }
      std::cout << "Check 4" << std::endl;
      temp->next = new_node;
      new_node->prev = temp;
    }
};


int main(){
  Node* head = NULL;
  Insertion I1 = Insertion(head);
  I1.InsertionFront(3);
  I1.InsertionFront(6);
  I1.InsertionFront(7);
  I1.InsertionAfterGivenNode(I1.head->next,9);
  I1.AtEnd(8);
  I1.display();
  return 0;
}