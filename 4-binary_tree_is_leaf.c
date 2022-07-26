#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete: function that deletes an entire binary tree
 * @tree: binary tree to delete
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if(!node)
		return (0);

	if(!node->left && !node->right)
		return (1);
	else
		return (0);
}