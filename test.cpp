#include<bits/stdc++.h>

#include "codes/stack.cpp"

using namespace std;
int main(){
    int temp;
    cin>>temp;
    Node* top = (Node*)malloc(sizeof(Node));
    top -> link = NULL;
    top ->data = temp;

    int n,k;
    cin>>n;
    cin>>k;

    for(int i=0;i<n;i++){
        cin>>temp;
        top = push(temp,top);
    }

    for(int i=0;i<k;i++){
        top = pop(top);
    }

}    