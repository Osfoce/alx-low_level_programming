#ifndef LISTS_H
#define LISTS_H
/**
 * struct list_s - Stingly linked lists
 * @str: string
 * @next: points to the next node
 * @len: length of the string
 *
 * Description: stingly linked list node structure for ALX project
 */
typedef struct list_s
{
        char *str;
        unsigned int x;
        struct list_s *next;
}list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif