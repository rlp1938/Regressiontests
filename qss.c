#include <stdio.h>
#include "str.h"
void quick_sort(char **, int, int);
int partition(char **, int, int);

int main()
{
	int n = 10;
	char **list = xmalloc(n * sizeof(char *));
	char *data[10] = {"sam", "bob", "alice", "fred", "mike",
					"robert", "george", "albert", "john", "adam" };
	int i;
	for (i = 0; i < n; i++) {
		list[i] = xstrdup(data[i]);
	}

	quick_sort(list, 0, n-1);
	printf("\nArray after sorting:");

	for(i = 0; i < n; i++)
		printf("%s ", list[i]);

	putchar('\n');
	return 0;
}

void quick_sort(char **a, int l, int u)
{
	int j;
	if(l < u) {
		j = partition(a, l, u);
		quick_sort(a, l, j - 1);
		quick_sort(a, j + 1, u);
	}
}

int partition(char **a, int l, int u)
{
	int i, j;
	char *v, *temp;
	v = a[l];
	i = l;
	j = u + 1;

	do {
		do
			i++;
		while (i <= u && strcmp(a[i], v) < 0);

		do
			j--;
		while (strcmp(v, a[j]) < 0);
		//while(v < a[j]);

		if(i < j) {
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	} while(i < j);

	a[l] = a[j];
	a[j] = v;

	return(j);
}
