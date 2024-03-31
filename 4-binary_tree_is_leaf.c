#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  Check if it's a leaf or not
 * @node: The node to check
 *
 * Return: Interger 1 when true otherwise 0 and NULL when
 *        node doesnt exist
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left != NULL || node->right != NULL || node == NULL)
	{
		return (0);
	}
	return (1);
}
