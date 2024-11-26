#ifndef RANKING_H
#define RANKING_H

typedef struct {
    void* item;
    int rank;
} RankNode;

typedef struct {
    RankNode* nodes;
    int size;
    int capacity;
} Ranking;

Ranking* create_ranking(int capacity);
void add(Ranking* ranking, void* item, int rank);
void** get_top(Ranking* ranking, int count);
void free_ranking(Ranking* ranking);

#endif