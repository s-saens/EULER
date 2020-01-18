#include <iostream>
#include <cmath>

using namespace std;

int DividingCount(unsigned long long int num)
{
	if(num == 1) return 1;
	
	int count = 2;

	unsigned long long int num_changed = num;
	
	// ��Ʈ���� ���� �������� ����(����)�� �ִ� �μ�(factor)�� ������(ŭ)�� �ִ� �μ��� �ϴ��Ϸ� �����ϹǷ�
	// ��Ʈ���� ���� ���ʿ� �ִ� ���� ����ϰ� �������� �����Ѵ�. 
	for(int i=2 ; i <= (int)sqrt(num) ; ++i)
	{
		if(num%i == 0)
		{
			// ��Ʈ���� ���� ���� �μ��� �ϴ��Ϸ� �����Ǵ� �ٸ� ���ڰ� �����Ƿ� count�� +1 ���ش�. 
			if(i*i == num) count++;
			
			// ��Ʈ���� ���� ���ʿ� �ִ� ���� ���, �ϳ��� 2�� ����ġ�� �ΰ� count�� +2 ���ش�. 
			else count += 2;
		}
	}
	
	return count;
}

unsigned long long int MakeTriangleNum(int index)
{
	unsigned long long int sum = 0;
	
	for(int i=0 ; i<=index ; ++i)
	{
		sum += i;
	}
	
	return sum;
}

int main()
{
	unsigned long long int TNum;
	for(int i=1 ; ; ++i)
	{
		TNum = MakeTriangleNum(i);
		
		// cout << "(" << i << ") " << TNum << " " << DividingCount(TNum) << endl; // �̰� ���� ������. Ȯ�ο�
		
		if(DividingCount(TNum) > 500) break;
	}
	
	cout << endl << "The first triangle number to ha over five hundred divisors is ";
	cout << TNum << endl;
}
