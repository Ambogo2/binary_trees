#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return:Height of the binary tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	else
	{
		leftHeight = binary_tree_height(tree->left);
		rightHeight = binary_tree_height(tree->right);
	}
	return ((leftHeight > rightHeight ? leftHeight : rightHeight) + 1);

}
