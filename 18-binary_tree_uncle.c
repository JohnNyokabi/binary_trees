#include "binary_trees.h"

/**
 * binary_tree_uncle - find sibling of the parent node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to siblings of the parent
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent) || !(node->parent->parent))
		return (NULL);

	if (node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	return (node->parent->parent->right);
}
