/*
File Name : binary_tree.c
Author : Evan Gertis
Date : 04/04/2019
Author : Evan Gertis
*/


//main entry point of the program.
int main(){
    struct node *root = NULL;

    root = getnode('P');
    root->lchild = getnode('Q');
    root->rchild = getnode('R');
    root->lchild->lchild = getnode('A');
    root->lchild->rchild = getnode('B');
    root->rchild->lchild = getnode('X');

    display(root, 0);
    printf("\n\n");

    printf("Preorder : ");
    
    preorder(root);
    printf("\n\n");

    printf("Inorder : ");
    inorder(root);
    printf("\n\n");
    
    printf("Postorder : ");
    postorder(root);
    printf("\n\n");

    printf("Level order : ");
    levelOrder(root);
    printf("\n\n");

    printf("Height of tree is %d\n", height((root)));

    return 0;
}


