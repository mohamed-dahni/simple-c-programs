#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
	/**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/
    // find the  pick
    int i, l;
    for (i = n-2; i >= 0; i--)
        if (strcmp(s[i], s[i+1]) < 0) break;
    
    // return 0 if there is no pick
    if (i < 0) return 0;
    
    for (l = n-1; l > i; l--)
        if(strcmp(s[i], s[l]) < 0) break;
    
    // swap the targeted elements
    char* tmp;
    tmp = s[i];
    s[i] = s[l];
    s[l] = tmp;
    
    // reverse the rest
    for(int j = i+1, k = n-1; j<k; k--, j++) {
        tmp = s[j];
        s[j] = s[k];
        s[k] = tmp;
    }
    
    return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}