#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of the node
 * @node: pointer to the node
 *
 * Return: pointer to the sibling, or NULL if no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
