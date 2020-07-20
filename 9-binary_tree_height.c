#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: the height of a binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	ssize_t height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		height++;

	if (tree->right != NULL)
		height++;

	return (height);

}
