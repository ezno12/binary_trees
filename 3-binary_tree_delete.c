#include "binary_trees.h"
/**
 * binary_tree_delete - Function that deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 * Return: void - no return
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
