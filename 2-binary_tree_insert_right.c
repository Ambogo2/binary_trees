#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent:a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return:a pointer to the created node,
 * or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent  == NULL)
	{
		free(newNode);
		return (NULL);
	}
	if (parent->right != NULL)
	{
		parent->right->parent = newNode;
		newNode->right = parent->right;
	}
	parent->right = newNode;

	return (newNode);

}
