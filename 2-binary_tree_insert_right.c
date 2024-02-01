#include "binary_trees.h"

/**
 * binary_tree_insert_right - function to Inserts a node as a left-child of
 * of another in a binary tree.
 * @parent: A pointer to the node.
 * @value: The value of the new node.
 *
 * Return: NULL or pointer to the new node.
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
