#include "binary_trees.h"
/**
 * binary_tree_sibling - Function that finds the sibling of a node
 * @node: Pointer to the node to find the sibling.
 * Return: Returns pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->right == node && node->parent->left)
	{
		return (node->parent->left);
	}

	if (node->parent->left == node && node->parent->right)
	{
		return (node->parent->right);
	}

	return (NULL);
}
