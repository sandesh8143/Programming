struct node{
    int data ;
    struct node*right;
    struct node*left;
};
typedef struct node Node;

void insertbegin(int data, Node*head){
    Node*temp = (Node*)malloc(sizeof(Node));
    temp -> data =data;
    temp -> right=NULL;
    while(head ->right != NULL){
        head = head -> right ;
    }
    temp -> left = head ;
    head -> right = temp ;
}


Node* searchbegin(int data ,Node*head){
    while(head -> right != NULL){
        if(head -> data ==data){
            break;
        }
        head = head -> right;
    }
    return head;
}


void deletelastnode(Node*head){
    while(head ->right != NULL){
        head = head ->right;
    }
    Node* temp = head -> left;
    temp -> right = NULL;
    free(head);
}


void deletenode(Node*head ,int data){
    Node*temp = searchbegin(data , head);
    temp -> left -> right = temp -> right ;
    temp -> right -> left = temp -> left ;
    free(temp);
}

