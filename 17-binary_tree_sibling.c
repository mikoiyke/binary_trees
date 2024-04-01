#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != NULL)
		return (node->parent->right);

	else if (node->parent->right != NULL)
		return (node->parent->left);

	else
		return (NULL);

}
