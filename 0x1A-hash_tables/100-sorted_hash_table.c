#include "hash_tables.h"
#include "shash.h"

/**
* shash_table_create - creates a sorted hash table
* @size: size of the hash table
*
* Return: pointer to the new table, or NULL on failure
*/

shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *shtable;
unsigned long int j;

shtable = malloc(sizeof(shash_table_t));
if (shtable == NULL)
return (NULL);
shtable->size = size;
shtable->shead = NULL;
shtable->stail = NULL;
shtable->array = malloc(sizeof(shash_node_t) * size);
if (shtable->array == NULL)
{
free(shtable);
return (NULL);
}
for (j = 0; j < size; j++)
{
shtable->array[j] = NULL;
}
return (shtable);
}

/**
* make_shash_node - makes sorted hash table node
* @key: key for the data
* @value: value of the data to be stored
*
* Return: pointer to the new node, or NULL on failure
*/

shash_node_t *make_shash_node(const char *key, const char *value)
{
shash_node_t *shnode;
shnode = malloc(sizeof(shash_node_t));
if (shnode == NULL)
return (NULL);
shnode->key = strdup(key);
if (shnode->key == NULL)
{
free(shnode);
return (NULL);
}
shnode->value = strdup(value);
if (shnode->value == NULL)
{
free(shnode->key);
free(shnode);
return (NULL);
}
shnode->next = shnode->snext = shnode->sprev = NULL;
return (shnode);
}

/**
* shash_table_set - sets a key to a value in the hash table
* @ht: sorted hash table
* @key: key to the data
* @value: value of the data to add
*
* Return: 1 on success, 0 otherwise
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
char *new_value;
shash_node_t *shnode, *tmp;

if (ht == NULL || ht->array == NULL || ht->size == 0 ||
key == NULL || strlen(key) == 0 || value == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);
tmp = ht->array[index];
while (tmp != NULL)
{
if (strcmp(tmp->key, key) == 0)
{
new_value = strdup(value);
if (new_value == NULL)
return (0);
free(tmp->value);
tmp->value = new_value;
return (1);
} tmp = tmp->next;
}
shnode = make_shash_node(key, value);
if (shnode == NULL)
return (0);
shnode->next = ht->array[index];
ht->array[index] = shnode;
add_to_sorted_list(ht, shnode);
return (1);
}

/**
* shash_table_delete - deletes a sorted hash table
* @ht: hash table to delete
*
* Return: void
*/

void shash_table_delete(shash_table_t *ht)
{
unsigned long int j;
shash_node_t *next;

if (ht == NULL || ht->array == NULL || ht->size == 0)
return;
for (j = 0; j < ht->size; j++)
{
while (ht->array[j] != NULL)
{
next = ht->array[j]->next;
free(ht->array[j]->key);
free(ht->array[j]->value);
free(ht->array[j]);
ht->array[j] = next;
}
}
free(ht->array);
ht->array = NULL;
ht->shead = ht->stail = NULL;
ht->size = 0;
free(ht);
}

/**
* shash_table_get - gets a value from the hash table
* @ht: hash table
* @key: key to the data
*
* Return: the value associated with key, or NULL on failure
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int index;
shash_node_t *tmp;

if (ht == NULL || ht->array == NULL || ht->size == 0 ||
key == NULL || strlen(key) == 0)
return (NULL);
index = key_index((const unsigned char *)key, ht->size);
tmp = ht->array[index];
while (tmp != NULL)
{
if (strcmp(tmp->key, key) == 0)
return (tmp->value);
tmp = tmp->next;
}
return (NULL);
}
