// Given the root of a binary tree,
// connect all nodes at the same level using an additional nextRight pointer for each node.
// Initially, all nextRight pointers contain garbage values (or null).
// Your function should set each node’s nextRight pointer to point to its immediate neighbor on the same level.
// The driver code will print the level-order traversal.
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node *nextRight;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
        nextRight = nullptr;
    }
};

Node *connect(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (q.size())
    {
        int n = q.size();
        Node *node = NULL;
        for (int i = 0; i < n; i++)
        {
            Node *temp = q.front();
            q.pop();
            if (!node)
                node = temp;
            else
            {
                node->nextRight = temp;
                node = temp;
            }
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
    return root;
}