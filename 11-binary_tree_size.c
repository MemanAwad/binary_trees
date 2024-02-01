#include "binary_trees.h"

/**
 * binary_tree_size - return size of a binary tree.
 * @tree: A pointer to the root node.
 * 
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_of_tree = 0;

	if (tree != NULL)
	{
		size_of_tree += 1;
		size_of_tree += binary_tree_size(tree->left);
		size_of_tree += binary_tree_size(tree->right);
	}
	return (size_of_tree);
}
