#include<iostream>
#include<queue>

using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int data){
            this -> data = data;
            this -> left = NULL;
            this -> right = NULL;
        }
};

node* buildTree(node * root){

    int data;
    cout<<"\nEnter the data for Node: "<<endl;
    cin>>data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"\nEnter data for inserting in left of "<< data <<endl;
    root->left = buildTree(root->left);
    cout<<"\nEnter data for inserting in right of "<< data <<endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<< endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
            }
    }
}

void buildFromLevelOrder(node* &root){
    
    queue<node*> q;
    int data;
    cout<<"Enter data for root "<<endl;
    cin>>data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout<<"Enter left node for: "<< temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node for: "<< temp->data <<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
    
}

void inorder(node* root){

    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<< root->data <<" ";
    inorder(root->right);
}

void preorder(node* root){

    if(root == NULL){
        return;
    }

    cout<< root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){

    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<< root->data<<" ";
}

int main(){

    node* root = NULL;

    buildFromLevelOrder(root);

    // // create the binary tree
    // root = buildTree(root);

    // cout<<"\n***Printing the LEVEL ORDER TRAVERSAL ***\n";
      levelOrderTraversal(root);

    // cout<<"\n***Printing the  INORDER TRAVERSAL ***\n";
    // inorder(root);

    // cout<<"\n***Printing the  PREORDER TRAVERSAL ***\n";
    // preorder(root);

    // cout<<"\n***Printing the  POSTORDER TRAVERSAL ***\n";
    // postorder(root);

    return 0;
}