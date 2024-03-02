#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a new node as
 * the right child of a given parent node in a binary tree.
 * @parent: A pointer to the parent node.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
