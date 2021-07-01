struct node{
    int data ;
    struct node* link;
};

typedef struct node Node;

//insertion
Node* push(int data, Node*top){
    Node*temp= (Node*)malloc(sizeof(Node));
    temp -> link = top;
    temp -> data = data ;
    top =temp;
    return top;
}

//deletion
Node* pop(Node* top){
    if(top){
        Node* temp = top;
        top = temp -> link;
        std::cout<<"Popped:"<<temp->data<<std::endl;
        free(temp);
        return top;
    }
    else{
        std::cout<<"Underflow"<<std::endl;
    }
    return NULL;
}