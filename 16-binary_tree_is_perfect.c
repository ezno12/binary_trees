#include "binary_trees.h"
/**
 * find_depth - Function that finds depth of binary tree/
 * @tree: Pointer to the root node of the tree to check.
 * Return: Returns depth of leftmost leaf
 */
int find_depth(const binary_tree_t *tree)
{
	int i = 0;

	while (tree)
	{
		i++;
		tree = tree->left;
	}

	return (i);
}
/**
 * test_is_perfect - Function that test if a binary tree is perfect or not.
 * @tree: Pointer to the root node of the tree to check.
 * @count: counter levels
 * @level: Level of the binary tree
 * Return: If tree is NULL, your function must return 0
 */
int test_is_perfect(const binary_tree_t *tree, int count, int level)
{
	if (tree == NULL)
	{
		return (1);
	}

	if (!tree->left && !tree->right)
	{
		return (count == level + 1);
	}

	if (!tree->left || !tree->right)
	{
		return (0);
	}

	return (test_is_perfect(tree->left, count, level + 1) &&
			(test_is_perfect(tree->right, count, level + 1)));
}

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	depth = find_depth(tree);

	return (test_is_perfect(tree, depth, 0));
}
