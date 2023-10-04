#include "binary_trees.h"
/**
 * binary_tree_insert_left - This function adds a
 * binary tree node on the left
 * @parent: This is the parent node to add new node to
 * @value: This is the value of new node
 * Return: pointer to newly added node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	else
		new_node->left = NULL;
	new_node->right = NULL;
	parent->left = new_node;

	return (new_node);
}
