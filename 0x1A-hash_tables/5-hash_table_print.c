#include "hash_tables.h"

/**
 * hash_table_print - Function prints a hash table
 *
 * if ht is NULL, don’t print anything
 * */

void hash_table_print(const hash_table_t *ht) {
    unsigned long int i;
    hash_node_t *temp;
    int first = 1;

    if (ht == NULL) {
        return;
    }

    printf("{");
    for (i = 0; i < ht->size; i++) {
        temp = ht->array[i];
        while (temp != NULL) {
            if (!first) {
                printf(", ");
            }
            printf("'%s': '%s'", temp->key, temp->value);
            first = 0;
            temp = temp->next;
        }
    }
    printf("}\n");
}

