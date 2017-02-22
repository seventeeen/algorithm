/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1260
 *
 */

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;
void DFS(bool** table, int k, int N, bool* visit) {
	for (int i = 1; i <= N; i++) {
		if (table[k][i] && !visit[i]) {
			printf("%d ", i);
			visit[i] = true;
			DFS(table, i, N, visit);
		}
	}
}
int main(void){
	int N, M, V;
	cin >> N >> M >> V;
	bool **table = (bool**)calloc(N+1, sizeof(bool*));
	for (int i = 0; i < N + 1; i++)
		table[i] = (bool*)calloc(N + 1, sizeof(bool));
	int x, y;
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &x, &y);
		table[x][y] = true;
		table[y][x] = true;
	}
	bool *visit_bfs = (bool*)calloc(N + 1, sizeof(bool));
	bool *visit_dfs = (bool*)calloc(N + 1, sizeof(bool));
	cout << V << " ";
	visit_dfs[V] = true;
	DFS(table, V, N, visit_dfs);
	cout << endl;
	queue<int> Q;
	Q.push(V);
	visit_bfs[V] = true;
	while (Q.size()) {
		int f = Q.front();
		printf("%d ", f);
		Q.pop();
		for (int i = 1; i <= N; i++) {
			if (table[f][i] && !visit_bfs[i]) {
				Q.push(i);
				visit_bfs[i] = true;
			}
		}
	}



	return 0;
}