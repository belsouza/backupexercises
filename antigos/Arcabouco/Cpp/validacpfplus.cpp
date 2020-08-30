#include <iostream>

using namespace std;

class Member{
	
	public:
		
		int validacpf(int num[] )
		{
			int i, j;
			int p1, p2, t1, t2, vpd, vsd;
			p1=p2=vpd=vsd=0;
			
			for(i=0, j=10 ;i<9; i++, j--)
			{
				p1 = p1 + (num[i] * j);
			}
			
			t1 = (p1 * 10) % 11;
			
			if(t1 == 10)
			{
				t1 = 0;
			}
			for(i = 0, j = 11; i < 10; i++, j--)
			{
				p2 = p2 + (num[i] * j);
			}
			
			t2 = (p2 * 10) % 11;
			
			if(t2 == 10)
			{
				t2 = 0;
			}
			
			if((t1 == num[9])&&(t2 == num[10]))
			{
				return 1;
			}
			
			return 0;
		}
};

int main(void)
{
	int i, num[11], stat;	
	Member z2;
	
	for(i = 0; i < 11; i++)
	{
		cout << "\nEntre com o " << i << "numero.";
		cin >> num[i];
	}
	
	stat = z2.validacpf(num);
	
	if(stat)
	{
		cout << "\nO numero eh valido.";
	}
	else
	{
		cout << "\nO numero nao eh valido.";
	}
	return 0;
}


