#include "binary_trees.h"

/**
 * binary_tree_height - measure height of the binary tree.
 * @tree: root of tree.
 *
 * Return: height of tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int right, left;

	if (!tree)
		return (0);

	if (!(tree->right) && !(tree->left))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
