#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int tree_left, tree_right = 0;

	if (tree == NULL)
		return(0);

	if (tree->left == NULL && tree->right == NULL)
		return(1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	tree_left = binary_tree_is_full(tree->left);
	tree_right = binary_tree_is_full(tree->right);

	return (tree_left && tree_right);

}
