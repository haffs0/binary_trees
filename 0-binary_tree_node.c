#include "binary_trees.h"
/**
 * binary_tree_node - define a new node
 * @parent: a pointer to parent node
 * @value: value of the node
 * Return: a node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = new_node->right = NULL;

	return (new_node);
}