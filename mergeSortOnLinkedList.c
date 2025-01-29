/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node* next;
}Node;
void printList(Node* head)
{
    Node* temp = head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
        
    }
}

Node* createNode(int data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insert(Node** head, int data)
{
    Node* newNode = createNode(data);
    if(*head==0)
    {
        *head = newNode;
    }
    else
    {
        newNode->next = *head;
        *head = newNode;
    }
}

Node* findMid(Node* head)
{
    Node* slow  = head;
    Node* fast =  head;
    
    while(fast->next != NULL) {
        fast = fast->next;
        if(fast->next!=NULL){
            slow = slow -> next;
            fast = fast->next;
        }
        
    }
    return slow;
}
Node* merge(Node* left , Node* right){

    if(left==NULL){
        return right;
    }

    if(right==NULL){

         return right;
    }
    
    Node* ans = createNode(-1);
    Node* temp = ans;


    while(left!=NULL && right!=NULL){

        if(left->data < right->data){
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else{

            temp->next=right;
            temp = right;
            right=right->next;
        }
    }


      while(left != NULL) {
        temp -> next = left;
        temp = left;
        left = left -> next;
    }
    
    while(right != NULL) {
        temp -> next = right;
        temp = right;
        right = right -> next;
    }

    ans  = ans->next;
    return ans;
}

Node* sortList(Node* head) {
        
    if(head==NULL || head->next==NULL){

        return head;
    }

    Node* mid = findMid(head);

    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;

    left = sortList(left);
    right = sortList(right);

    Node* result = merge(left, right);

    return result;

}
int main()
{
    int nodes;
    Node* head = NULL;
    printf("Enter size of Nodes: ");
    scanf("%d",&nodes);
    int t = nodes;
    printf("Enter Nodes: ");
    while(t--)
    {
        int node;
        scanf("%d",&node);
        insert(&head,node);
    }
    
    Node* ans = sortList(head);
    
    printList(ans);
}
