#include "binary_trees.h"

/**
 * binary_tree_depth - count the depth of a node in a binary tree.
 * @tree: A pointer to the node.
 *
 * Return: 0 or the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
