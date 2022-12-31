#ifndef _OPERATIONS_H_
#define _OPERATIONS_H_

class Operations{
  private :
    char tree[10];
  
  public :
    Operations(char* t);

    ~Operations();

    bool add_root(char key);

    bool add_left(char a, int parent);

    bool add_right(char a, int parent);

    void print_tree(); 
};
#endif