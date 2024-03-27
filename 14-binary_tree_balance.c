#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the bf.
 * Return:Balance factor of the binary tree
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int  balance_factor = 0;

	if (tree == NULL)
	{
		return (0);
	}
	
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		balance_factor += binary_tree_height(tree->left) + 1;
	}
	if (tree->right != NULL)
	{
		balance_factor -= binary_tree_height(tree->right) + 1;
	}
	return (balance_factor);
}
