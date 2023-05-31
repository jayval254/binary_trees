#include "binary_trees.h"

/**
 * maximum - returns the maximum of two integers
 * @first: the first integer
 * @second: the second integer
 * Return: the maximum between the two integer
 */
size_t maximum(size_t first, size_t second)
{
	if (first > second)
		return (first);
	else
		return (second);
}
/**
 * binary_tree_height - measures the hieght of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: the height of the tree, 0 if null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (maximum(binary_tree_height(tree->left),
				binary_tree_height(tree->right)) + 1);
	return (0);
}
