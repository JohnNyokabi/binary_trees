#include "binary_trees.h"

/**
 * recur_height - measures the height of a binary tree
 * @tree: tree root
 *
 * Return: height
 */
size_t recur_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	left = recur_height(tree->left);
	right = recur_height(tree->right);
	if (left > right)
		return (left + 1);
	return (right + 1);
}

/**
 * binary_tree_height - calls recur_height to return the height
 * of the binary tree
 * @tree: tree root
 *
 * Return: height of the binary tree, otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);
	return (recur_height(tree) - 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor of the tree or 0 if tree is null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) -
			binary_tree_height(tree->right));
}
