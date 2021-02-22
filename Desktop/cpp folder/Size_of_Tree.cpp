#include<bits/stdc++.h>
using namespace std;
class Node
{
    int data;
    Node right;
    Node left;
};

int size_of_tree(Node* node)
{
    if(node == nullptr)
        return 0;
    else
        return size_of_tree(node->right) + size_of_tree(node->left) + 1;
}
int main()
{
    /*Size of tree
    Given a binary tree of size N, you have to count number of nodes in it.
    For example, count of nodes in below tree is 4.

       // 1
       / \
      10  39
     /
    5*/

    //solution pass the value of pointer
    Node* p = new Node;
    cout<<size_of_tree(p)<<endl;

}

