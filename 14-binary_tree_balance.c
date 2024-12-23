#include "binary_trees.h"
/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node of the tree to measure the balance
* Return: balance factor
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height;
size_t right_height;
if (tree == NULL)
return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return (1 + (left_height > right_height ? left_height : right_height));
}
/**
* binary_tree_balance - Measures the balance factor.
* @tree: A pointer to the root node of the tree.
* Return: The balance factor.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height;
int right_height;
if (tree == NULL)
return (0);
left_height = (tree->left ? (int)binary_tree_height(tree->left) : 0);
right_height = (tree->right ? (int)binary_tree_height(tree->right) : 0);
return (left_height - right_height);
}
