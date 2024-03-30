#include "binary_trees.h"

/**
* binary_tree_node - A function that creates a binary tree node
* @parent: The name of the root node
* @value: The name of the data
*
* Return: The pointer to inserted node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *newnode;

newnode = malloc(sizeof(binary_tree_t));

if (newnode == NULL)
{
return (NULL);
}

newnode->parent = parent;
newnode->n = value;
newnode->left = NULL;
newnode->right = NULL;

return (newnode);
}
