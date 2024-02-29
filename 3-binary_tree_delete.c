#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a whole binary tree.
 * @tree: A pointer to the parent of tree.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);

}
