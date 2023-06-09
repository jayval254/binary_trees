#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * @tree: a pointer to the node to measure the depth
 * Return: The depth of a tree, 0 if null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->parent)
		return (binary_tree_depth(tree->parent) + 1);
	return (0);
}
