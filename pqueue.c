#include "pqueue.h"

/*----------------------------------------------------------------*
 * https://www.geeksforgeeks.org/priority-queue-using-linked-list *
 *----------------------------------------------------------------*/

static QueueNode * NewQueueNode(
        void * data,
        int priority)
{
    QueueNode * new_node = (QueueNode *)malloc(sizeof(QueueNode));
    MEM_CHECK(new_node)

    new_node->data = data;
    new_node->priority = priority;
    new_node->next = NULL;

    return new_node;
}

static inline void * Peek(
        QueueNode ** head)
{
    return (*head)->data;
}

static inline void Pop(
        QueueNode ** head)
{
    QueueNode * temp = * head;

    (*head) = (*head)->next;

    free(temp);
}

inline int QueueIsEmpty(
        QueueNode ** head)
{
    return (* head) == NULL;
}

void QueuePush(
        QueueNode ** head,
        void * data,
        int priority)
{
    if (QueueIsEmpty(head)) {
        *head = NewQueueNode(data, priority);
        return;
    }

    QueueNode * start = (*head);

    QueueNode * temp = NewQueueNode(data, priority);
    if ((*head)->priority > priority) {

        temp->next = *head;
        (*head) = temp;
    }
    else {
        while (start->next != NULL && start->next->priority < priority) {
            start = start->next;
        }

        temp->next = start->next;
        start->next = temp;
    }
}

void * QueueGet(
        QueueNode ** head)
{
    void * temp = Peek(head);

    Pop(head);

    return temp;
}
