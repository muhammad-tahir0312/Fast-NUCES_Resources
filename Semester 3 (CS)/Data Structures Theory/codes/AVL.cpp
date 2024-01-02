#include<bits/stdc++.h>

using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;
    int height;
    
    Node(int data)
    {
    	this->data = data;
	}
};

int height(Node *node)
{
    if (node == NULL)
    {
        return 0;
    }
    return node->height;
}
 
int max(int x, int y)
{
    return (x > y)? x : y;
}

Node* newNode(int data)
{
    Node* node = new Node(data);
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return(node);
}
 
Node *rightRotate(Node *y)
{
    Node *x = y->left;
    Node *T2 = x->right;
 
    x->right = y;
    y->left = T2;
 
    y->height = max(height(y->left),  height(y->right)) + 1;
    x->height = max(height(x->left),  height(x->right)) + 1;

    return x;
}
 
Node *leftRotate(Node *root)
{
    Node *x = root->right;
    Node *y = x->left;
 
    x->left = root;
    root->right = y;
 
    root->height = max(height(root->left),  height(root->right)) + 1;
    x->height = max(height(x->left),  height(x->right)) + 1;
    return x;
}
 
int getBalance(Node *node)
{
    if (node == NULL)
    {
        return 0;
	}
    return height(node->left) - height(node->right);
}
 
Node* insert(Node* node, int data)
{
    if (node == NULL)
    {
        return(newNode(data));
    }
 
    if (data < node->data)
    {
        node->left = insert(node->left, data);
    }
    else if (data > node->data)
    {
        node->right = insert(node->right, data);
    }
    else 
    {
        return node;
    }
 
    node->height = 1 + max(height(node->left), height(node->right));
 
    int balance = getBalance(node);
 
    if (balance > 1 && data < node->left->data)
    {
        return rightRotate(node);
	}
 
    if (balance < -1 && data > node->right->data)
    {
        return leftRotate(node);
	}
 
    if (balance > 1 && data > node->left->data)
    {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }
 
    if (balance < -1 && data < node->right->data)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}
 
void Search_Node(Node *root, int d){
	if(root==NULL){
		cout << d << " is not Present in Tree." << endl << endl;
		return;
	}
	if(d==root->data){
		cout << d << " is Present in Tree." << endl << endl;
		return;
	}
	if(d < root->data){
		Search_Node(root->left,d);
		return;
	}
	else if(d > root->data){
		Search_Node(root->right,d);
		return;
	}
}

Node* minValueNode(Node* node)
{
    Node* current = node;
    while (current->left != NULL) current = current->left;
    return current;
}

Node* deleteNode(Node* root, int key)
{
    if (root == NULL) return root;
 
    if ( key < root->data ) root->left = deleteNode(root->left, key);

    else if( key > root->data ) root->right = deleteNode(root->right, key);
 
    else
    {
        if( (root->left == NULL) ||
            (root->right == NULL) )
        {
            Node *temp = root->left ? root->left : root->right;
            if (temp == NULL)
            {
                temp = root;
                root = NULL;
            }
            else 
            *root = *temp;
            free(temp);
        }
        else
        {
            Node* temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
 
    if (root == NULL)
    return root;
 
    root->height = 1 + max(height(root->left), height(root->right));
 
    int balance = getBalance(root);

    if (balance > 1 &&getBalance(root->left) >= 0)
    {
        return rightRotate(root);
    }
 

    if (balance > 1 && getBalance(root->left) < 0)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
 
    if (balance < -1 && getBalance(root->right) <= 0)
    {
        return leftRotate(root);
    }
 
    if (balance < -1 && getBalance(root->right) > 0)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
 
    return root;
}


void preOrder(Node *root)
{
    if(root != NULL)
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}


void inOrder(Node *root)
{
	if(root != NULL)
	{
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
      }
}


void postOrder(Node *root)
{
	if(root != NULL)
	{
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
	}	
}
 
int main()
{
    Node *root = NULL;
    
    root = insert(root, 23);
    root = insert(root, 12);
    root = insert(root, 9);
    root = insert(root, 36);
    root = insert(root, 6);
    root = insert(root, 20);
    root = insert(root, 21);
    root = insert(root, 22);
    root = insert(root, 19);  
    cout << "Insertion in the AVL tree: \n";
    preOrder(root);
//    
//	root = search(root, 66);
////	root = search(root, 22);
////	root = search(root, 44);
//	
//    root = deleteNode(root, 35);
//    root = deleteNode(root, 99);
//    cout << "\n\nDeleting the following nodes(35 & 99) from the AVL tree: \n";
//    preOrder(root);
//
//    cout << "\n\nPre-order traversal for the AVL tree: \n";
//    preOrder(root);
    
    cout << "\n\nInorder traversal for the AVL tree: \n";
    inOrder(root);
//    
//    cout << "\n\nPost-order traversal for the AVL tree: \n";
//    postOrder(root);
    return 0;
}
 
