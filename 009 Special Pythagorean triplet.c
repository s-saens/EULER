#include <stdio.h>

int pow2(int num){return num*num;}

int is_pytha(int a, int b, int c) // a,b,c�� ���谡 Pythagorean Triplet �ΰ�? 
{
	if(pow2(a) + pow2(b) == pow2(c)) return 1;
	else return 0;
}

int sick(int a, int b, int c) // ��(sick, a+b+c = 1000) �� �����ϴ°�? 
{
	if(a+b+c == 1000) return 1;
	else return 0;
}

int main()
{
	int i,j,k;
	for(i=1;i<=999;++i)
	{
		for(j=i+1;j<=999;++j)
		{
			for(k=j+1;k<=999;++k)
			{
				if(is_pytha(i,j,k))
				{
					if(sick(i,j,k))
					printf("a : %d\nb : %d\nc : %d\na*b*c = %d",i,j,k, i*j*k);
					break; // ������ only one �̶�� ��õǾ������Ƿ� �ϳ��� ã�� ������. 
				}
			}
		}
	}
}
