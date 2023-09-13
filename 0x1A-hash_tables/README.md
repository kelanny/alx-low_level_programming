PROJECT: vi 0x1A. C - Hash tables
C, Algorithm, Data structure
By: Julien Barbier
Weight: 1
Ongoing second chance project - started Sep 7, 2023 6:00 AM, must end by Sep 14, 2023 6:00 AM


TASK: 0. >>> ht = {}
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that creates a hash table.

Prototype: hash_table_t *hash_table_create(unsigned long int size);
where size is the size of the array
Returns a pointer to the newly created hash table
If something went wrong, your function should return NULL

TASK: 1. djb2
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a hash function implementing the djb2 algorithm.

Prototype: unsigned long int hash_djb2(const unsigned char *str);
You are allowed to copy and paste the function from this page

TASK: 2. key -> index
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that gives you the index of a key.

Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
where key is the key
and size is the size of the array of the hash table
This function should use the hash_djb2 function that you wrote earlier
Returns the index at which the key/value pair should be stored in the array of the hash table
You will have to use this hash function for all the next tasks

TASK: 3. >>> ht['betty'] = 'cool'
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that adds an element to the hash table.

Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
Where ht is the hash table you want to add or update the key/value to
key is the key. key can not be an empty string
and value is the value associated with the key. value must be duplicated. value can be an empty string
Returns: 1 if it succeeded, 0 otherwise
In case of collision, add the new node at the beginning of the list

TASK: 4. >>> ht['betty']
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that retrieves a value associated with a key.

Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
where ht is the hash table you want to look into
and key is the key you are looking for
Returns the value associated with the element, or NULL if key couldn’t be found

TASK: 5. >>> print(ht)
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that prints a hash table.

Prototype: void hash_table_print(const hash_table_t *ht);
where ht is the hash table
You should print the key/value in the order that they appear in the array of hash table
Order: array, list
Format: see example
If ht is NULL, don’t print anything
