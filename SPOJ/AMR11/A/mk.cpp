#include <cstdio>
#include <cstdlib>
#include <ctime>

int main()
{
	freopen("A.in", "w", stdout);
	srand(time(0));
	int t = 5; printf("%d\n", t);
	while(t--)
	{
		int n = 4, m = 5;
		printf("%d %d\n", n, m);
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1 ; j <= m; j++)
			{
				if(i == 1 && j == 1) printf("0 ");
				else if(i == n && j == m) printf("0 ");
				else printf("%d ", rand()%10 - rand()%5);
			}
			printf("\n");
		}
	}
	return 0;
}
