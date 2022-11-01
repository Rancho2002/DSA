#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node * left;
    struct node * right;
};

struct node * createNode(int data){
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;

    return ptr;
}

void preorder( struct node * ptr){
    if(ptr!=NULL){
        printf("%d ",ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);
    }
}

void postorder( struct node * ptr){
    if(ptr!=NULL){
        postorder(ptr->left);
        postorder(ptr->right);
        printf("%d ",ptr->data);
    }
}
void inorder( struct node * ptr){
    if(ptr!=NULL){
        inorder(ptr->left);
        printf("%d ",ptr->data);
        inorder(ptr->right);
    }
}
int main(){
    struct node *p,*p1,*p2,*p3,*p4;

    p=(struct node *)malloc(sizeof(struct node));

    // Constructing the root node 
    // p->data=3;
    // p->left=NULL;
    // p->right=NULL;

    //Creation of Node using function
    p=createNode(4);
    p1=createNode(1);
    p2=createNode(6);
    p3=createNode(5);
    p4=createNode(2);

    //Linking between nodes and its child
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;


        //     4
        //    / \
        //   1   6
        //  / \
        // 5   2
        // PreOrder: 4[ ][ ]
        //           4[1[][]][6[][]]
        //           4[1[5][2]][6[][]]
        //           4 1 5 2 6
        // PostOrder: [ ][ ]4
        //           [[][]1][[][]6]4
        //           [[5][2]1][[][]6]4
        //           5 2 1 6 4
        // InOrder: [ ]4[ ]
        //           [[]1[]]4[[]6[]]
        //           [[5]1[2]]4[[]6[]]
        //           5 1 2 4 6
    preorder(p);
    printf("\n");
    postorder(p);
    printf("\n");
    inorder(p);

    return 0;
}