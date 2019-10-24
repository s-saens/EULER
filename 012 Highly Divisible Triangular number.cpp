#include <iostream>
using namespace std;

unsigned long long int triangular_num(int index) // index(+1) ��° �ﰢ�� ��ȯ 
{
	int a = 0;  // �� 
	for(int i=1 ; i<=index ; ++i)
	{
		a += i;
	}
	return a;
}

int YAKSU_Cnt(int a)
{
	int cnt = 0;
	int last_YS = 1;
	for(int i=1 ; i<a ; ++i)
	{
		if(a%i == 0)
		{
			if(last_YS * i == a ) // ��� �ΰ� �� �����ʿ� ����������� 
			{
				return cnt*2;
				break;
			}
			else if(last_YS*last_YS == a) // �� ��� �������� ��� 
			{
				return cnt*2 - 1 ;
				break;
			}
			else
			{
				last_YS = i;
				cnt++;
			}
		}
	}
}

int main()
{
	int k;
	for(int i=1 ;; ++i)
	{
		if(YAKSU_Cnt(triangular_num(i)) < 500)
		{
			if(YAKSU_Cnt(triangular_num(i)) > 400)
			cout << i << " : " << triangular_num(i) << " " << YAKSU_Cnt(triangular_num(i)) << endl;
		}
		else
		{
			k = i;
			break;
		}
	}
	
	cout << endl << triangular_num(k) << endl;
}
