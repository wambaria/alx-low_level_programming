#include "hash_table.h"


/**
 * make_hash_node - creates a new hash node
 * @key: key for the node
 * @value: for the node
 *
 * Return: the new node, or NULL on failure
 */

unsigned long hash(const char *str)
{
    unsigned long hash = 5381;
    int c;

    while ((c = *str++))
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return hash;
}

/* Creates a new node with the given key and value */
hash_node_t *create_node(const char *key, const char *value)
{
    hash_node_t *node = malloc(sizeof(hash_node_t));
    if (node == NULL) {
        return NULL;
    }

    node->key = strdup(key);
    node->value = strdup(value);
    node->next = NULL;

    return node;
}

/* Adds a new node to the hash table with the given key and value */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    if (key == NULL || strlen(key) == 0) {
        return 0;
    }

    unsigned long hash_value = hash(key) % ht->size;
    hash_node_t *node = ht->array[hash_value];

    /* Check if key already exists in the hash table */
    while (node != NULL) {
        if (strcmp(node->key, key) == 0) {
            free(node->value);
            node->value = strdup(value);
            return 1;
        }
        node = node->next;
    }

    /* Key does not exist, create a new node */
    hash_node_t *new_node = create_node(key, value);
    if (new_node == NULL) {
        return 0;
    }

    /* Add the new node at the beginning of the list */
    new_node->next = ht->array[hash_value];
    ht->array[hash_value] = new_node;
    ht->count++;

    return 1;
}

