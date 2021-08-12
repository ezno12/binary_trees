#include "binary_trees.h"
/**
 * binary_tree_uncle - Function that finds the uncle of a node
 * @node: Pointer to the node to find the uncle.
 * Return: Returns pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
	{
		return (NULL);
	}
	if (node->parent->parent->right == node->parent &&
	    node->parent->parent->left)
	{
		return (node->parent->parent->left);
	}
	if (node->parent->parent->left == node->parent &&
	    node->parent->parent->right)
	{
		return (node->parent->parent->right);
	}

	return (NULL);
}
