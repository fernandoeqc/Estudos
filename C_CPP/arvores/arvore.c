#include "arvore.h"

Node *createNode()
{
    return NULL;
}

int insertNode(Node **parent_node, int new_value)
{
    if (*parent_node == NULL)
    {
        printf("esta vazio\n");
        *parent_node = (Node *)malloc(sizeof(Node));
        (*parent_node)->child_right = NULL;
        (*parent_node)->child_left = NULL;
        (*parent_node)->content = new_value;
    }
    else
    {
        if (new_value < (*parent_node)->content)
        {
            printf("foi pra esquerda\n");
            insertNode(&(*parent_node)->child_left, new_value);
        }
        if (new_value > (*parent_node)->content)
        {
            printf("foi pra direita\n");
            insertNode(&(*parent_node)->child_right, new_value);
        }
    }
}

bool isEmptyTree(Node *tree)
{
    return tree == NULL;
}

void showTree(Node *tree)
{
    if(!isEmptyTree(tree))
    {
        printf("<");    
        printf("%d", tree->content);
        showTree(tree->child_left);
        showTree(tree->child_right);
        printf(">");
    }
}