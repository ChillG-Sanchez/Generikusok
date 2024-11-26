#include <stdio.h>
#include <stdlib.h>
#include "ranking.h"

int main() {
    Ranking* ranking = create_ranking(10);

    int item1 = 1;
    int item2 = 2;
    int item3 = 3;

    add(ranking, &item1, 3);
    add(ranking, &item2, 1);
    add(ranking, &item3, 2);

    int count = 3;
    void** top_items = get_top(ranking, count);

    printf("Top %d items:\n", count);
    for (int i = 0; i < count; i++) {
        printf("%d\n", *(int*)top_items[i]);
    }

    free(top_items);
    free_ranking(ranking);
    return 0;
}