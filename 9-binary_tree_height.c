#include "binary_trees.h"

/**
 * binary_tree_height - Deletes a whole binary tree.
 * @tree: A pointer to the node.
 *
 * Return: the height of the node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	else if (tree->right != NULL && tree->left == NULL)
		return (1);
	return (binary_tree_height(tree->left) + 1);
}
