#include <bits/stdc++.h>

class Node{
    public :
      Node* next;
      int data;
    };

class Insertion{
  private :
    Node* head;
  public :
    Insertion(Node* n)
      :head{n}{
    }
    ~Insertion(){
      std::cout << "Destructor Called! " << std::endl;
    }
    void push_front(int new_data){
      //Allocate Node
      Node* new_node = new Node();
      //insert new data in new node.
      new_node->data = new_data;
      //change refernce 
      new_node->next = head;
      //point head to new
      head = new_node;
    }
    void afterMentionedNode(int kth, int new_value){
      Node* current=head;
      for(int i=0; i<kth-1; i++){
        if(current->next == NULL){
          std::cout << "Not Enough Elements in the linked list" << std::endl;
          return;
        }
        current = current->next;
      }
      Node* new_node = new Node();
      new_node->data = new_value;
      new_node->next = current->next;
      current->next = new_node;
    }

    void append(int new_data){
      Node* current = new Node();
      current->data = new_data;
      current->next = NULL;
      Node *last = head;
      if(head==NULL){
        std::cout << "Empty List, Appending as Head" << std::endl;
        head = current;
        return;
      }
      while(last->next != NULL){
        last = last->next;
      }
      last->next = current;
      return;
    }
    void display(){
      while(head != NULL){
        std::cout << head->data << " ";
        head=head->next;
      }
    }
};


int main(){
  Node* head = NULL;
  Insertion i = Insertion(head);
  i.append(13);
  i.push_front(7);
  i.push_front(5);
  i.afterMentionedNode(5, 3);
  i.push_front(4);
  i.afterMentionedNode(1, 12);
  i.append(9);
  i.display();
  return 0;
}