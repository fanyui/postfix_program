typedef struct stack *LINK;
LINK newnode(int x,LINK h);
float stackpop();
void stackpush(float num);
int stackfull();
int stackempty();
void stackinit(int a);
void displayStack();

