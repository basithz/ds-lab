#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// to create a newnode
struct Node* newnode(int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

//  inserting newnode
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return newnode(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}

// to find the minimum value node in a BST
struct Node* findMinNode(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}


struct Node* delet(struct Node* root, int data) {
//to delete node
    if (root == NULL) {
        return root;
    }

    if (data < root->data) {
        root->left = delet(root->left, data);
    } else if (data > root->data) {
        root->right = delet(root->right, data);
    } else {
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        struct Node* temp = findMinNode(root->right);
        root->data = temp->data;
        root->right = delet(root->right, temp->data);
    }
    return root;
}

//  search for a node in the BST
struct Node* search(struct Node* root, int data) {
    if (root == NULL || root->data == data) {
        return root;
    }

    if (data < root->data) {
        return search(root->left, data);
    } else {
        return search(root->right, data);
    }
}

//  to perform in-order traversal
void inOrderTraversal(struct Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

int main() {
    struct Node* root = NULL;
    int ch, data;

    do {
        printf("\nEnter your choice:\nBinary Search Tree Operations\n1.INSERT\n2.DELETE\n3.SEARCH\n.INORDER-TRAVERSAL\n5.EXIT");
       
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                root = insert(root, data);
                break;
            case 2:
                printf("Enter data to delete: ");
                scanf("%d", &data);
                root = delet(root, data);
                break;
            case 3:
                printf("Enter data to search: ");
                scanf("%d", &data);
                if (search(root, data) != NULL) {
                    printf("Data found in the BST.\n");
                } else {
                    printf("Data not found in the BST.\n");
                }
                break;
            case 4:
                printf("In-order Traversal: ");
                inOrderTraversal(root);
                printf("\n");
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (ch != 5);

    return 0;
}
