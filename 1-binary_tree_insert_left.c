#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a new node
 * as the left child of a given parent node in a binary tree.
 * @parent: A pointer to the parent node.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
