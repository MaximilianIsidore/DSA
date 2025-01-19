#include "hash_table.h"
#include <stdio.h>

int main() {
    ht_hash_table* ht = ht_new();
    printf("Maybe hash table created\n");
    ht_del_hash_table(ht);
    printf("hash table deleted \n");

    return 0;
}