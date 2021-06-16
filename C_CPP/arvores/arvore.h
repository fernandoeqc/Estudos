#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

// #define NULL ((void*) 0)

typedef struct node
{
    int content;    
    struct node * child_left;
    struct node * child_right;
}Node;

void getNewNode();
extern Node * createNode();
extern int insertNode(Node **parent_node, int new_value);
bool isEmptyTree(Node *tree);
void showTree(Node *tree);