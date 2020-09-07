void reverse() {
    while(cur != NULL) {
        next = cur -> next;
        cur -> next = prev;
        prev = cur;
        cur = next;
    }
}

void add(node** prev) {
    node* temp = new node();
    temp -> next = prev -> next;
    prev -> next = temp;
}