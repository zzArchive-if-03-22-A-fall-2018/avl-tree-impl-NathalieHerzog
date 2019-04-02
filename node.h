#ifndef BALANCEDTREE_NODE_H
#define BALANCEDTREE_NODE_H

typedef struct TreeImplementation* Tree;

struct TreeImplementation
{
    struct Node *head;
};

struct Node
{
    struct Node *next;
};

int 	get_key (Node node);
Node 	get_left (Node node);
void 	set_left (Node node, Node left_node);
Node 	get_right (Node node);
void 	set_right (Node node, Node right_node);
int 	get_height (Node node);
void 	set_height (Node node, int height);
Node 	create_node (int key);

#endif //BALANCEDTREE_NODE_H
