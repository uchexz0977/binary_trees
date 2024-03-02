#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a node is a leaf in a binary tree
 * @node: A pointer to the node to check
 *
 * This function checks if the given node is a leaf in a binary tree. A leaf
 * node is a node that has no children (i.e., both its left and right pointers
 * are NULL). If the node is a leaf, the function returns 1; otherwise, it
 * returns 0.
 *
 * Return: 1 if the node is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
