#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
* Return: height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
if (!tree)
return (0);
return (1 + _height(tree));
}
