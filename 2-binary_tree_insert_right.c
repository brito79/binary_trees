#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts nodeon the right
 * @parent: The node to insert on
 * @value: The value to insert in the node
 *
 * Return: Pointer to the inserted node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
	binary_tree_t *newnode = NULL;

	newnode = binary_tree_node(parent, value);

	if (newnode == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	parent->right = newnode;

	return (NULL);
}
