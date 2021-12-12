#include "main.h"

void freeNode(struct Node* node){
    if(node == NULL) return;

    freeNode(node->left);
    freeNode(node->right);
    
    free(node);
    node = NULL;
}

void freeTree(struct Node* root){
    if(root == NULL) return;
    
    freeNode(*(&root));
    free(root);
}

int main (){
    struct Node *root = NULL;

    struct Data newData1;
    newData1.intData = 0;
    newData1.floatData = 0.0;
    strcpy(newData1.charData, "alguma coisa");

    struct Data newData2;
    newData2.intData = 1;
    newData2.floatData = 2.0;
    strcpy(newData2.charData, "outra coisa");

    struct Data newData3;
    newData3.intData = 2;
    newData3.floatData = 3.0;
    strcpy(newData3.charData, "outra coisa");

    insert(&root, newData1);
    insert(&root, newData2);
    insert(&root, newData3);

    printf("preOrder: \n");
    preOrder(&root);
    printf("=====================\n");
    
    printf("Order: \n");
    order(&root);
    printf("=====================\n");

    printf("postOrder: \n");
    postOrder(&root);
    printf("=====================\n");

    int total = totalNodes(root) + 1;
    printf("o total de nodos na árvore binária é: %d \n", total);

    return 0;
}