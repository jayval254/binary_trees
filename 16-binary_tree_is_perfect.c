#include "binary_trees.h"

/**
 * find_height - finds the height of the tree
 * @tree: a pointer to the root node of the tree to check
 * Return: the height
*/
int find_height(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (-1);

	left = find_height(tree->left);
	right = find_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

/**
 * binary_tree_balance - checks tree balance
 * @tree: a pointer to the root node of the tree to check
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 1, right = 1;

	if (tree == NULL)
		return (0);

	left += find_height(tree->left);
	right += find_height(tree->right);

	return (left - right);
}

/**
 * check_perfection - checks perfection of tree
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if null
 */

int check_perfection(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if ((tree->left == NULL && tree->right == NULL) ||
		(tree->left != NULL && tree->right != NULL))
	{
		return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
	}

	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if null
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_balance(tree) == 0 && check_perfection(tree))
		return (1);

	return (0);
}
