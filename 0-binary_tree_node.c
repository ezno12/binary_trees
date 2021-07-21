#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node.
 *
 * @parent: root of node.
 * @value: value in the node.
 *
 * Return: Binary tree or Null
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *temp;

temp = malloc(sizeof(binary_tree_t));
if (temp == NULL)
Return (NULL);
temp->parent = parent;
temp->n = value;
temp->right = NULL;
temp->left = NULL;
Return (temp);
}
