#include "binary_trees.h"
#include <stdlib.h>
/**
* *binary_tree_is_leaf -  function that creates a binary tree.
* @node:  is a pointer to the node to check
* Return: If node is NULL, return 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
