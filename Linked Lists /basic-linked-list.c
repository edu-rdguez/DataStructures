#include <stdio.h>
#include <stdlib.h>

// Still gotta get this finished

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *listNodes(Node *list){
    list = NULL;
    return list;
}

Node *addNode(Node *list, int data){
    Node *newNode, *aux;
    newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    if (list == NULL){
        list = newNode;
    } else {
        aux = list;
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = newNode;
    }
    return list;
}

int main(){
    Node *list = listNodes(list);
    list = addNode(list, 5);
    list = addNode(list, 2);
    while(list != NULL){
        printf("%i\n", list->data);
        list = list->next;
    }
    free(list);
}
