/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1620
 *
 */

#include <cstdio>
#include <unordered_map>
#include <string>
#include <cstdlib>

using namespace std;

int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);
	char s[100];
	unordered_map<string, int> sex;
	string arr[100030];

	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		arr[i + 1].assign(s);
		sex[arr[i + 1]] = i + 1;
	}

	for (int i = 0; i < m; i++) {
		scanf("%s", s);
		if (s[0] < 'A')
			printf("%s\n", arr[atoi(s)].c_str());
		else
			printf("%d\n", sex[s]);
	}

	return 0;
}
