#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a tree inorder traversal.
 * @tree: A pointer to the tree.
 * @func: a pointer to the function
 *
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
