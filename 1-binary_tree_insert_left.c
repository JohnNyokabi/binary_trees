#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert new node as the left child of a parent
 * @parent: parent node
 * @value: value of the new node
 *
 * Return: newly created node, otherwise NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = newNode;
		newNode->left = NULL;
	}
	else
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
		parent->left = newNode;
	}

	return (newNode);
}
