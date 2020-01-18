#include <stdio.h>
#include <math.h>

int is_prime(int num) // ��ȯ���� 1�̸� �Ҽ�
{
	int i; int cnt = 1;
	for(i=2 ; i <= sqrt(num) ; ++i)
	{
		if(num%i == 0)
		{
			cnt--;
			break;
		}
	}
	return cnt;
}

int main()
{
	int i, n;
	unsigned long long int sum = 0;
	
	scanf("%d",&n);
	
	for(i=2 ; ; ++i)
	{
		if(is_prime(i)) // i�� �Ҽ��� 
		{
			if(i < n)
			{
				sum += i;
			}
			else break;
		}
	}
	printf("%lld",sum);
}
