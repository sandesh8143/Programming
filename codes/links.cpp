struct node{
    int data;
    struct node*link;
};
typedef struct node Node;
void insert(int data,Node* head){
    Node* temp1=(Node*)malloc(sizeof(Node*));
    temp1 -> data =data;
    temp1 -> link = NULL;
    while(head->link != NULL){
        head = head->link;
    }
    head -> link = temp1;
}

Node* searchnode(int data, Node*head){
    while(head ->link != NULL){
        if(head->data == data){
            break;4
        }
        head =head ->link;
    }
    return head;
}


void deletenode(Node* temp, Node* head){
    while(head ->link != temp){
        head = head -> link;
    }
    head -> link = temp -> link;
    free(temp);
}

void deletenodebydata(int data, Node* head){
    Node* temp = searchnode(data,head);
    while(head ->link != temp){
        head = head -> link;
    }
    head -> link = temp -> link;
    free(temp);
}

void sendesh(Node*temp, Node*head){
    temp -> data =temp -> link -> data ;
    Node* temp1 = temp->link;
    temp -> link = temp -> link -> link ;
    free(temp1);
}
 Node* insertbegin(Node*head, int data){
     Node*temp=(Node*)malloc(sizeof(Node));
     temp -> link =head;
     head = temp;
     return head;
 }

 void insertval(Node*head,Node*temp,int data){
     Node*temp2= temp ->link;
     Node*avoid= (Node*)malloc(sizeof(Node));
     temp-> link =avoid;
     avoid->link =temp2;
 }


 Node* deletehead(Node*head){
     Node*temp = head;
     head = head->link;
     free(temp);
     return head;

 }