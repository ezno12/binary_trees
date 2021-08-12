#include "binary_trees.h"
/**
 * binary_tree_depth - Function that measures the depth
 * of a node in a binary tree
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: depth of binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || !tree->parent)
	{
		return (0);
	}

	depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}
