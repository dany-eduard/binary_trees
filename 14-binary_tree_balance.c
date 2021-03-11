#include "binary_trees.h"

#define MAX(a, b) ((a) > (b) ? (a) : (b))
/**
 * tree_height - function that measures the height of a binary tree
 *@tree: is a pointer to the root node of the tree to measure the height.
 * Return: max
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = tree_height(tree->left);
	right = tree_height(tree->right);
	return (MAX(left, right) + 1);
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 *@tree: is a pointer to the root node of the tree to measure the height.
 *Return: max
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree_height(tree) - 1);
}




/**
 * binary_tree_balance - checks the balance of a binary tree.
 * @tree: Pointer to the tree.
 * Return: Balance of the binary tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_count = 0, right_count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_count = binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_count = binary_tree_height(tree->right);

	return (left_count - right_count);
}
