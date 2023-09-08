#include "hash_tables.h"

/**
* shash_table_print_rev - prints a sorted hash table in reverse
* @ht: hash table to print
*
* Return: void
*/
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *tmp;
char flag = 0;

if (ht == NULL || ht->shead == NULL)
return;

printf("{");
tmp = ht->stail;
while (tmp != NULL)
{
if (flag == 1)
printf(", ");
printf("'%s': '%s'", tmp->key, tmp->value);
flag = 1;
tmp = tmp->sprev;
}
printf("}\n");
}

/**
* add_to_sorted_list - add a node to the sorted linked list
* @table: the sorted hash table
* @node: the node to add
*
* Return: void
*/
void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
shash_node_t *tmp;

if (table->shead == NULL && table->stail == NULL)
{
table->shead = table->stail = node;
return;
}

tmp = table->shead;
while (tmp != NULL)
{
if (strcmp(node->key, tmp->key) < 0)
{
node->snext = tmp;
node->sprev = tmp->sprev;
tmp->sprev = node;
if (node->sprev != NULL)
node->sprev->snext = node;
else
table->shead = node;
return;
}
tmp = tmp->snext;
}

node->sprev = table->stail;
table->stail->snext = node;
table->stail = node;
}

/**
* shash_table_print - prints a sorted hash table
* @ht: hash table to print
*
* Return: void
*/
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *tmp;
char flag = 0;

if (ht == NULL || ht->shead == NULL)
return;

printf("{");
tmp = ht->shead;
while (tmp != NULL)
{
if (flag == 1)
printf(", ");
printf("'%s': '%s'", tmp->key, tmp->value);
flag = 1;
tmp = tmp->snext;
}
printf("}\n");
}
