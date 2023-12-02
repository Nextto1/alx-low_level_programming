#include "hash_tables.h"

/**
 * hash_table_print - to print a hash table
 * @ht: hash table to be printed for the function
 *
 * Return: the void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int k;
	hash_node_t *tmp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (k = 0; k < ht->size; k++)
	{
		tmp = ht->array[k];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
