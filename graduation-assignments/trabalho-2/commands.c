#include "commands.h"

void showAllNodes(struct Node **head_ref){
    if (head_ref == NULL) return;
    
    struct Node *currentNode = *head_ref;
    
    while (currentNode != NULL){
        printf("%f %f %f %d %d %d %d \n", currentNode->data.coordinate[0], currentNode->data.coordinate[1], currentNode->data.coordinate[2], currentNode->data.rgb.red, currentNode->data.rgb.green, currentNode->data.rgb.blue, currentNode->data.ID);
        
        currentNode = currentNode->next;    
    }
}

int readCommand(){
    char command[30];
    scanf("%s", command);
    printf("O comando digitado foi %s \n", command);    
}

void lx(struct Node *head_ref){
    if (head_ref == NULL) return;
    
    showAllNodes(&head_ref);
}

void ly(struct Node *head_ref){
    if (head_ref == NULL) return;
    
    showAllNodes(&head_ref);
}

void lz(struct Node *head_ref){
    if (head_ref == NULL) return;
    
    showAllNodes(&head_ref);
}

void li(struct Node *head_ref){
    if (head_ref == NULL) return;
    
    showAllNodes(&head_ref);
}

void lf(struct Node *head_ref){
    if (head_ref == NULL) return;
    
    showAllNodes(&head_ref);
}

int addNodes(struct Node **head_ref){
    struct Node *currentNode = *head_ref;

    int accessedNodes = 0;

    while (currentNode != NULL){
        accessedNodes = accessedNodes + currentNode->timesAccessed;
        currentNode = currentNode->next;
    }

    return accessedNodes;
}

void tot(struct Node **headOrdered_ref, struct Node **headPush_ref, struct Node **headAppend_ref){
    int accessedNodesOrdered = 0;
    int accessedNodesPush = 0;
    int accessedNodesAppend = 0;

    accessedNodesOrdered = addNodes(headOrdered_ref);    
    accessedNodesPush = addNodes(headPush_ref);
    accessedNodesAppend = addNodes(headAppend_ref);    

    printf("LX:%d LI:%d LF:%d\n", accessedNodesOrdered, accessedNodesPush, accessedNodesAppend);
}