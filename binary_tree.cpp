// C++ program to insert element in binary tree 
#include <iostream> 
#include <queue> 
using namespace std; 
  
/* A binary tree node has key, pointer to left child 
and a pointer to right child */
struct Node { 
    int key; 
    struct Node* left, *right; 
}; 
  
/* function to create a new node of tree and r 
   eturns pointer */
struct Node* newNode(int key) 
{ 
    struct Node* temp = new Node; 
    temp->key = key; 
    temp->left = temp->right = NULL; 
    return temp; 
}; 
  
/* Inorder traversal of a binary tree*/
void inorder(struct Node* temp) 
{ 
    if (!temp) 
        return; 
  
    inorder(temp->left); 
    cout << temp->key << " "; 
    inorder(temp->right); 
} 
/* Given a binary tree, print its nodes according to the 
"bottom-up" postorder traversal. */
void postorder(struct Node* temp) 
{ 
    if (temp == NULL) 
        return; 
  
    // first recur on left subtree 
    postorder(temp->left); 
  
    // then recur on right subtree 
    postorder(temp->right); 
  
    // now deal with the node 
    cout << temp->key << " "; 
} 
  
/*function to insert element in binary tree */
void insert(struct Node* temp, int key) 
{ 
    queue<struct Node*> q; 
    q.push(temp); 
  
    // Do level order traversal until we find 
    // an empty place.  
    while (!q.empty()) { 
        struct Node* temp = q.front(); 
        q.pop(); 
  
        if (!temp->left) { 
            temp->left = newNode(key); 
            break; 
        } else
            q.push(temp->left); 
  
        if (!temp->right) { 
            temp->right = newNode(key); 
            break; 
        } else
            q.push(temp->right); 
    } 
} 
  
// Driver code 
int main() 
{ 
    struct Node* root = newNode(10); 
    root->left = newNode(20); 
    root->left->left = newNode(30); 
    root->right = newNode(40); 
    root->right->left = newNode(50); 
    root->right->right = newNode(60); 
    int key = 69; 
    insert(root, key); 
    cout << endl; 
    cout << "\nInorder Traversal:"; 
    inorder(root); 
    cout<<"\nPost-order Traversal:";
    postorder(root);
  
    return 0; 
} 
