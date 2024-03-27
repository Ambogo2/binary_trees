#include "binary_trees.h"

/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect
 * @tree:a pointer to the root node of the tree to check
 * Return:0 or 1 if perfect
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size;

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	return (binary_tree_is_full(tree) && size == (1 << height) - 1);
}
