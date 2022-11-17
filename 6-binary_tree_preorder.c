#include "binary_trees.h"
/**
 * binary_tree_preorder - pre-order traversal binary tree
 * @tree: a pointer to the root node
 * @func: a pointer to a function
 * Return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
