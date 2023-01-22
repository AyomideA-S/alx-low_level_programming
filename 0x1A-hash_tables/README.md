# 0x1A. C - Hash tables
## C    Algorithm    Data structure

## **Tasks**

```diff
+ 0. >>> ht = {} 
! mandatory 
! Write a function that creates a hash table. 

! Prototype: hash_table_t *hash_table_create(unsigned long int size); 
! where size is the size of the array 
! Returns a pointer to the newly created hash table 
! If something went wrong, your function should return NULL 

+ 1. djb2 
! mandatory 
! Write a hash function implementing the djb2 algorithm. 

! Prototype: unsigned long int hash_djb2(const unsigned char *str); 
! You are allowed to copy and paste the function from this page 

+ 2. key -> index 
! mandatory 
! Write a function that gives you the index of a key. 

! Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size); 
! where key is the key 
! and size is the size of the array of the hash table 
! This function should use the hash_djb2 function that you wrote earlier 
! Returns the index at which the key/value pair should be stored in the array of the hash table 
! You will have to use this hash function for all the next tasks 

+ 3. >>> ht['betty'] = 'cool' 
! mandatory 
! Write a function that adds an element to the hash table. 

! Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value); 
! Where ht is the hash table you want to add or update the key/value to 
! key is the key. key can not be an empty string 
! and value is the value associated with the key. value must be duplicated. value can be an empty string 
! Returns: 1 if it succeeded, 0 otherwise 
! In case of collision, add the new node at the beginning of the list 

+ 4. >>> ht['betty'] 
! mandatory 
! Write a function that retrieves a value associated with a key. 

! Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
! where ht is the hash table you want to look into 
! and key is the key you are looking for 
! Returns the value associated with the element, or NULL if key couldn’t be found 

+ 5. >>> print(ht) 
! mandatory 
! Write a function that prints a hash table. 

! Prototype: void hash_table_print(const hash_table_t *ht); 
! where ht is the hash table 
! You should print the key/value in the order that they appear in the array of hash table 
! Order: array, list 
! Format: see example 
! If ht is NULL, don’t print anything 

+ 6. >>> del ht 
! mandatory 
! Write a function that deletes a hash table. 

! Prototype: void hash_table_delete(hash_table_t *ht); 
! where ht is the hash table 

+ 7. $ht['Betty'] = 'Cool' 
! advanced 
! In PHP, hash tables are ordered. Wait… WAT? How is this even possible? 



! Before you continue, please take a moment to think about it: how you would implement it if you were asked to during an interview or a job. What data structures would you use? How would it work? 

! For this task, please: 

! Read PHP Internals Book: HashTable 
! Use the same hash function 
! Use these data structures: 

! Rewrite the previous functions using these data structures: 

! shash_table_t *shash_table_create(unsigned long int size); 
! int shash_table_set(shash_table_t *ht, const char *key, const char *value); 
! The key/value pair should be inserted in the sorted list at the right place 
! Note that here we do not want to do exactly like PHP: we want to create a sorted linked list, by key (sorted on ASCII value), that we can print by traversing it. See example. 
! char *shash_table_get(const shash_table_t *ht, const char *key); 
! void shash_table_print(const shash_table_t *ht); 
! Should print the hash table using the sorted linked list 
! void shash_table_print_rev(const shash_table_t *ht); 
! Should print the hash tables key/value pairs in reverse order using the sorted linked list 
! void shash_table_delete(shash_table_t *ht); 
! You are allowed to have more than 5 functions in your file 

```

## ***Author:***
### ***Afolabi John Oluwaseun***
