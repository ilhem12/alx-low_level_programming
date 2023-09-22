#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const listint_t *h);
size_t list_len(const listint_t *h);
list_t *add_node(list_t **head, const int n);
list_t *add_node_end(list_t **head, const int n);
void free_list(list_t *head);
void free_list2(list_t **head);
int pop_list(list_t **head);
list_t *get_node_at_index(list_t *head, unsigned int index);
int sum_list(list_t *head);
list_t *insert_node_at_index(list_t **head, unsigned int idx, int n);
int delete_node_at_index(list_t **head, unsigned int index);
listint_t *reverse_list(list_t **head);
size_t print_list_safe(const list_t *head);
size_t free_list_safe(list_t **h);
list_t *find_list_loop(list_t *head);

#endif /* LISTS_H */
