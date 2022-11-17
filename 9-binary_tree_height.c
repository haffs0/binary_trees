#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node
 * Return: 1 on success otherwise 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r_count = 0, l_count = 0;

	if (tree)
	{
		l_count = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r_count = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return  ((l_count > r_count) ? l_count : r_count);
	}
	return (0);
}
