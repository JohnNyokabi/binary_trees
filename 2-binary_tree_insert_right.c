#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as right child of parent
 * @parent: parent node
 * @value: value of the new node
 *
 * Return: newly created node, otherwise NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;

	if (parent->right == NULL)
	{
		parent->right = newNode;
		newNode->right = NULL;
	}
	else
	{
		newNode->right = parent->right;
		newNode->right->parent = newNode;
		parent->right = newNode;
	}

	return (newNode);
}
