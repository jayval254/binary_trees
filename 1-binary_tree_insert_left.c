#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as left child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the newly created node, otherwise null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->left = parent->left;
	if (parent->left)
		parent->left->parent = new_node;
	new_node->parent = parent;
	parent->left = new_node;
	new_node->right = NULL;
	new_node->n = value;

	return (new_node);
}
