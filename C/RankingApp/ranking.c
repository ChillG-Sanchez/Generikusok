#include <stdio.h>
#include <stdlib.h>
#include "ranking.h"

Ranking* create_ranking(int capacity) {
    Ranking* ranking = (Ranking*)malloc(sizeof(Ranking));
    ranking->nodes = (RankNode*)malloc(sizeof(RankNode) * capacity);
    ranking->size = 0;
    ranking->capacity = capacity;
    return ranking;
}

void add(Ranking* ranking, void* item, int rank) {
    if (ranking->size == ranking->capacity) {
        ranking->capacity *= 2;
        ranking->nodes = (RankNode*)realloc(ranking->nodes, sizeof(RankNode) * ranking->capacity);
    }
    RankNode node;
    node.item = item;
    node.rank = rank;
    ranking->nodes[ranking->size++] = node;

    for (int i = ranking->size - 1; i > 0 && ranking->nodes[i].rank < ranking->nodes[i - 1].rank; i--) {
        RankNode temp = ranking->nodes[i];
        ranking->nodes[i] = ranking->nodes[i - 1];
        ranking->nodes[i - 1] = temp;
    }
}

void** get_top(Ranking* ranking, int count) {
    if (count > ranking->size) {
        count = ranking->size;
    }
    void** top_items = (void**)malloc(sizeof(void*) * count);
    for (int i = 0; i < count; i++) {
        top_items[i] = ranking->nodes[i].item;
    }
    return top_items;
}

void free_ranking(Ranking* ranking) {
    free(ranking->nodes);
    free(ranking);
}