#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to Inserts a node as a left-child of
 * of another in a binary tree.
 * @parent: A pointer to the node.
 * @value: The value of the new node.
 *
 * Return: NULL or pointer to the new node.
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
