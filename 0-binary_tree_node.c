#include "binary_trees.h"

/**
 * A binary_tree_node - Creates a binary tree node.
 * @parent: a pointer to the parent of the node to create.
 * @value: This is a value to put in the new node.
 *
 * Return: If error - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
