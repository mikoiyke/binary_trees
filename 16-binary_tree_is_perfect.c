#include "binary_trees.h"

/**
 * tree_height - Measure the height of a binary tree.
 * @tree: Pointer the root node of binary tree.
 *
 * Return: On success, height of tree. On failure, 0.
 */

size_t tree_height(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);

	lh = tree_height(tree->left);
	rh = tree_height(tree->right);

	return (1 + (lh > rh ? lh : rh));
}

/**
 * binary_tree_size- The size of the binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: 0 if tree  is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftSize, rightSize;

	if (tree == NULL)
		return (0);

	leftSize = binary_tree_size(tree->left);
	rightSize = binary_tree_size(tree->right);

	return (leftSize + rightSize + 1);
}

/**
 * _pow - Returns the exponential given base and power.
 * @base: The base number.
 * @power: The power.
 *
 * Return: On success, the exponentiation.
 */
size_t _pow(int base, int power)
{
	int i = 0, result = 1;

	if (power == 0)
		return (1);

	while (i < power)
	{
		result *= base;
		i++;
	}

	return (result);
}

/**
 * binary_tree_is_perfect - Checks if Binary tree is perfect.
 * @tree: Pointer to root node of binary tree.
 *
 * Return: On success, 1. Otherwise, 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size;

	if (tree == NULL)
		return (0);

	height = tree_height(tree);
	size = binary_tree_size(tree);

	if ((_pow(2, height) - 1) == size)
		return (1);

	return (0);
}
