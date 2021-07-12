#include "linked_list.c"

int main(void) {
    List *list = create_linked_list();
    for (int i = 0; i < 10; i++) {
        add_to_list(list, i);
    }
    display_list(list);
}