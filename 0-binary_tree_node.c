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
	(void)parent;
	binary_tree_t *newnode = NULL;


	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->left = NULL;
		newnode->n = value;
		newnode->right = NULL;
	}
	return (newnode);
}

