#include "binary_trees.h"
/**
 * binary_tree_nodes - Function that counts the nodes with
 * at least 1 child in a binary tree
 * @tree: Pointer to the root node  of the tree to count the number of nodes.
 * Return: numbers of leaves in the binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t number_nd = 0;

	if (tree == NULL)
	{
		return (0);
	}

	else if (tree->left || tree->right)
	{
		number_nd = (binary_tree_nodes(tree->left) + 1 +
					binary_tree_nodes(tree->right));
	}

	return (number_nd);
}
