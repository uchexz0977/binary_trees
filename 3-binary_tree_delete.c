#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: A pointer to the root node of the tree to delete
 *
 * This function recursively deletes an entire binary tree starting from the
 * given root node. It traverses the tree in a depth-first manner, deleting
 * each node and freeing its memory. After deleting all nodes, it frees the
 * memory allocated for the root node itself.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
}
