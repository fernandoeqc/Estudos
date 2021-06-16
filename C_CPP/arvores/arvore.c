#include "arvore.h"

void getNewNode()
{
    int num;
    scanf("%u", &num);
    printf("O numero digitado foi: %u \n", num);

}


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



// aula estacio
void pre_ordem ( Node *ptr ) {
	printf ("%u",ptr->content ); //visita o nó
	if (ptr -> child_left != NULL)
		pre_ordem ( ptr -> child_left ); //percorre recursivamente em pré-ordem a subárvore esquerda
	if (ptr -> child_right != NULL)
		pre_ordem ( ptr -> child_right ); //percorre recursivamente em pré-ordem a subárvore direita
}