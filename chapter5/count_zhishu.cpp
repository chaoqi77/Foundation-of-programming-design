#include <iostream>
#include <cmath>
using namespace std;

int is_prime(int i)
{
	int res = 2;
	if(i>0){
		for(int j=2;j<i;j++)
		{
			if(i%j == 0)
			{
				res = 1;
				break;
			}
		}
	}
	return res;	
}

int main()
{
	int i = 2;
    int total = 0;
    for(i;i<101;i++)
	{
		int a = is_prime(i);
		if(a != 1){
			if((i-1)%4 != 0){
			    total++;
			}
		}
	}
    cout << total << endl;
    return 0;
}