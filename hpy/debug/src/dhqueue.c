#include "debug_internal.h"

void DHQueue_init(DHQueue *q) {
    q->head = NULL;
    q->tail = NULL;
    q->size = 0;
}

void DHQueue_append(DHQueue *q, DebugHandle *h) {
    if (q->head == NULL) {
        h->prev = NULL;
        h->next = NULL;
        q->head = h;
        q->tail = h;
    } else {
        h->next = NULL;
        h->prev = q->tail;
        q->tail->next = h;
        q->tail = h;
    }
    q->size++;
}

DebugHandle *DHQueue_popfront(DHQueue *q)
{
    assert(q->size > 0);
    assert(q->head != NULL);
    DebugHandle *head = q->head;
    if (q->size == 1) {
        q->head = NULL;
        q->tail = NULL;
        q->size = 0;
    }
    else {
        q->head = head->next;
        q->head->prev = NULL;
        q->size--;
    }
    // the following is not strictly necessary, but it makes thing much easier
    // to debug in case of bugs
    head->next = NULL;
    head->prev = NULL;
    return head;
}


static void linked_item_sanity_check(DebugHandle *h) {
    if (h == NULL)
        return;
    if (h->next != NULL)
        assert(h->next->prev == h);
    if (h->prev != NULL)
        assert(h->prev->next == h);
}

void DHQueue_sanity_check(DHQueue *q) {
#ifndef NDEBUG
    if (q->head == NULL || q->tail == NULL) {
        assert(q->head == NULL);
        assert(q->tail == NULL);
        assert(q->size == 0);
    }
    else {
        assert(q->head->prev == NULL);
        assert(q->tail->next == NULL);
        assert(q->size > 0);
        DebugHandle *h = q->head;
        HPy_ssize_t size = 0;
        while(h != NULL) {
            linked_item_sanity_check(h);
            if (h->next == NULL)
                assert(h == q->tail);
            h = h->next;
            size++;
        }
        assert(q->size == size);
    }
#endif
}
