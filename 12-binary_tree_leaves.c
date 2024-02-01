#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts number of leaves in a binary tree.
 * @tree: A pointer to the root node.
 *
 * Return: Number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t nleaves = 0;

	if (tree)
	{
		nleaves += (!tree->left && !tree->right) ? 1 : 0;
		nleaves += binary_tree_leaves(tree->left);
		nleaves += binary_tree_leaves(tree->right);
	}
	return (nleaves);
}
