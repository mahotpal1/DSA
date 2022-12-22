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

    //update prev->next to null;
    void deleteFromEnd(){
      Node* temp = head;
      Node* prev = NULL;
      while(temp->next != NULL){
        prev = temp;
        temp= temp->next;
      }
      std::cout << temp->data << " deleted from list!" << std::endl;
      prev->next = NULL;
      delete(temp);
    }

    void deleteFromKthLoc(int k){
      if(head==NULL){
        std::cout << "Linked List is empty, No Elements to be deleted!" << std::endl;
        return;
      }
      Node* temp = head;
      if(k == 1){
        head = head->next;
        std::cout << temp->data << " deleted from list!" << std::endl;
        delete temp;
        return;
      }
      for(int i=1; i<k-1; i++){
        if(temp==NULL || temp->next == NULL){
        std::cout << "Index out of Range, no elements deleted!" << std::endl;
        return;
      }
        temp = temp->next;
      }
      
      Node* ne = temp->next->next;
      delete(temp->next);
      temp->next = ne;
    }

    //update head to head->next 
    void deleteBegining(){
      if(head == NULL){
        std::cout << "List is Empty!" << std::endl;
        return;
      }
      Node* temp=head;
      head=head->next;
      std::cout << temp->data << " deleted from list!" << std::endl;
      delete temp;
    }

    void append(int new_data){
      Node* current = new Node();
      current->next = NULL;
      current->data = new_data;
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
      Node* temp = head;
      std::cout << "Array Elements : " << std::endl;
      while(head != NULL){
        std::cout << head->data << " ";
        head=head->next;
      }
      std::cout << std::endl;
      head = temp;
    }
};


int main(){
  Node* head = NULL;
  Insertion i = Insertion(head);
  i.append(13);
  i.append(9);
  i.append(6);
  i.append(2);
  i.append(0);
  i.append(1);
  i.display();
  i.deleteBegining();
  i.display();
  i.append(121);
  i.append(34);
  i.deleteFromEnd();
  i.display();
  i.deleteFromKthLoc(1);
  i.display();
  i.deleteFromKthLoc(8);
  i.display();
  i.deleteFromKthLoc(3);
  i.display();
  return 0;
}