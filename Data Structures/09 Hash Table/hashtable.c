// This code it's heavily inspired from here
// https://github.com/engineer-man/youtube/blob/master/077/hashtable.c/

// benjaSantana just made a few modifications, to make it more adept to the
// a project I was working on. Also added new hash function, called djb2 by Dan Bernstein.


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#define TABLE_SIZE 100000

typedef struct node{
    
    char* key;
    char* value;
    struct node* next;

}node;

typedef struct HashTable{

    node** rows;

}HashTable;

unsigned long hash(const char*);
void insert_HT(HashTable*, const char*,const char*);
HashTable *init_HT(void);
node *insertPair_HT(const char*, const char*);
void show_HT(HashTable*);
void delete_HT(HashTable*,const char*);
char *searchFor_HT(HashTable *, const char*);



unsigned long hash(const char *str){
    unsigned long hash = 5381;
    int c;

    while (c = *str++)
        hash = hash * 33 + c;

    return hash%TABLE_SIZE;
}

// Create the HashTable, and allocate memory
HashTable *init_HT(void) {
    
    // allocate table
    HashTable *hashtable = malloc(sizeof(HashTable) * 1);

    // allocate table entries
    hashtable->rows = malloc(sizeof( node* ) * TABLE_SIZE);

    // Set each row to null
    int i = 0;
    for (; i < TABLE_SIZE; ++i) {
        hashtable->rows[i] = NULL;
    }

    return hashtable;
}

// *For use of other functions only* Insert a tuple of Key, Value into the HashTable
node *insertPair_HT(const char *key, const char *buffer){

    node *temp = malloc(1*sizeof(node));
    temp->key = malloc(1+sizeof(key));
    temp->value = malloc(1+sizeof(buffer));

    strcpy(temp->key, key);
    strcpy(temp->value, buffer);

    temp->next = NULL;

    return temp;

}

// Insert a new element in the Table
void insert_HT(HashTable *hashtable, const char* key, const char* buffer){
    
    unsigned int index = hash(key);    

    node *nodey = hashtable->rows[index];

    // Check if the row hasn't a value, if not we can just add the new one
    // and return
    if(nodey == NULL){

        hashtable->rows[index] = insertPair_HT(key, buffer); 
        return;
    }

    node *previous;

    // Check all the nodes in that row to see if any matches with the key given.
    // If found, overwirite the value
    while(nodey!=NULL){

        //We're overwriting the value in a specific key
        if(strcmp(nodey->key, key)==0){

            free(nodey->value);
            nodey->value = malloc(strlen(buffer)+1);
            strcpy(nodey->value, buffer);
            return;


        }

        previous = nodey;
        nodey = previous->next;
    }

    // The key wasn't found, add a new column in the row
    previous->next = insertPair_HT(key,buffer);
}

// Search for a specific key in the table.
char *searchFor_HT(HashTable *hashtable, const char* key){

    unsigned int index = hash(key);

    node *nodey = hashtable->rows[index];

    //Check if there's a row with that hashed key, if not
    // return 
    if(nodey == NULL){
        printf("There's no such key");
        return NULL;
    }

    //Check each column in the row to see if we found one with
    // the key we have and return the value.
    while(nodey!=NULL){

        if(strcmp(nodey->key, key)==0){

            return nodey->value;

        }

        nodey->key;

    }

    return NULL;

}

// Delete element from the table (Left almost unchanged from the source code)
void delete_HT(HashTable *hashtable, const char *key) {
    unsigned int bucket = hash(key);

    // try to find a valid bucket
    node *nodey = hashtable->rows[bucket];

    // no bucket means no entry
    if (nodey == NULL) {
        return;
    }

    node *prev;
    int idx = 0;

    // walk through each entry until either the end is reached or a matching key is found
    while (nodey != NULL) {
        // check key
        if (strcmp(nodey->key, key) == 0) {
            // first item and no next entry
            if (nodey->next == NULL && idx == 0) {
                hashtable->rows[bucket] = NULL;
            }


            // first item with a next entry
            if (nodey->next != NULL && idx == 0) {
                hashtable->rows[bucket] = nodey->next;
            }

            // last item
            if (nodey->next == NULL && idx != 0) {
                prev->next = NULL;
            }

            // middle item
            if (nodey->next != NULL && idx != 0) {
                prev->next = nodey->next;
            }

            // free the deleted entry
            free(nodey->key);
            free(nodey->value);
            free(nodey);

            return;
        }

        // walk to next
        prev = nodey;
        nodey = prev->next;

        ++idx;
    }
}


// Display HashTable (Left Unchanged from source code)
void show_HT(HashTable *hashtable) {
    for (int i = 0; i < TABLE_SIZE; ++i) {
        node *nodey = hashtable->rows[i];

        if (nodey == NULL) {
            continue;
        }

        printf("slot[%d]: ", i);

        for(;;) {
            printf("%s=%s ", nodey->key, nodey->value);

            if (nodey->next == NULL) {
                break;
            }

            nodey = nodey->next;
        }

        printf("\n");
    }
}

/*Here's an example on how to use it*/
int main(){

    //Initialize the HashTable
    HashTable *ht = init_HT();

    //Insert items
    insert_HT(ht, "v1", "Hello");
    insert_HT(ht, "v2", "MyNameIsJeff");
    insert_HT(ht, "v1045", "Mate");
    insert_HT(ht, "na", "tal");

    show_HT(ht);
    printf("\n");
    
    //Delete an Item
    delete_HT(ht, "v2");

    show_HT(ht);

    //Search for an Item
    printf("\n%s\n", searchFor_HT(ht, "v1"));


    return 0;
}
