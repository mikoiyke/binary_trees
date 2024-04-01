#include "binary_trees.h"



binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	left_grand_parent = (node->parent-parent->left = node->parent);
	right_grand_parent = (node->parent-parent->right = node->parent);

	if (node != NULL && node->parent != NULL && node->parent->parent != NULL)
		return (left_grand_parent || right_grand_parent);
	else
		return (NULL);
}
