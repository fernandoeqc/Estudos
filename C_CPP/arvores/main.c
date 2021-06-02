#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

#include "arvore.h"

int main ()
{

    Node *n1 = createNode();
    Node *n2 = createNode();

    insertNode(&n1, 22);
    insertNode(&n1, 15);
    insertNode(&n1, 44);
    insertNode(&n1, 18);
    insertNode(&n1, 66);
    insertNode(&n1, 38);
    insertNode(&n1, 19);
    showTree(n1);

    printf("tree: %u \n", isEmptyTree(n1));

    return 0;
}

