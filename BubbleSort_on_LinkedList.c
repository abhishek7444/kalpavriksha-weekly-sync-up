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
Node* reverseLL(Node* head)
{
    Node* prev = NULL;
    Node* curr = head;
    
    while(curr)
    {
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    
    return prev;
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
    
    head = reverseLL(head);
    
    
    int index =0;
    
    for(Node* curr = head; curr!=0;curr = curr->next)
    {
        for(Node* curr1 = head;curr1!=0; curr1= curr1->next)
        {
            if(curr1!=0 && curr1->next!=0 && curr1->data > curr1->next->data)
            {
                int temp  = curr1->next->data;
                curr1->next->data = curr1->data;
                curr1->data = temp;
            }
        }
    }
    printList(head);
    return 0;
}
