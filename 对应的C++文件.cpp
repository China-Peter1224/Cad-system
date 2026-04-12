#include <bits/stdc++.h>
#include <windows.h>
#include <stdio.h> 
using namespace std;
int main()
{
	double a[100],c,d,i = 1,h,j;
	int num = 0;
	cout << "Welcome to use CAD system"<< endl <<"version 1.0.6" << endl ; 
	cout << "Release time = 2026/04/12" << endl;
	cout << "Orange(c)2026" << endl;
	_sleep(5*1000);
	cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
	cout << "please tell me your language" << endl << "请告诉我你的语言" << endl;
	cout << "(1)English" << endl << "(2)中文" << endl;
	cin >> a[99];
	if(a[99] == 2) 
	{
		for(int e = 1;e >= 1;e++)
		{
		cout << "(1)计算" << endl << "(2)计时器" << endl << "(3)计数" << endl << "(4)退出" << endl;
		cin >> a[0];
		if(a[0] == 1)
		{
			cout << "(1)加法" << endl << "(2)减法" << endl << "(3)乘法" << endl << "(4)除法" << endl << "(5)退回" << endl;
			cin >> a[1];
			if((a[1] == 1)||(a[1] == 2)||(a[1] == 3)||(a[1] == 4)||(a[1] == 5))
			{
			if(a[1] == 1)
			{
			cout << "要计算的数是" << endl ;
			cin >> a[2];
			for(int b = 1;b <= a[2];b++)
			{
				cin >> a[3];
				num += a[3];
			}
			cout << "答案是" << " "<< num  << endl;
			_sleep(3*1000);
			cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
			}
			if(a[1] == 2)
			{
			cout << "要计算的数是" << endl ;  
			cin >> a[4];
			for(int b = 1;b <= a[4];b++)
			{
				cin >> a[5];
				num -= a[5];
			}
			cout << "答案是" << " "<< num  << endl;
			_sleep(3*1000);
			cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
			}
			int sum = 1;
			if(a[1] == 3)
			{
			cout << "要计算的数是" << endl ;
			cin >> a[6];
			for(int b = 1;b <= a[6];b++)
			{
				cin >> a[7];
				sum = sum * a[7];
			}
			cout << "答案是" << " "<< sum << endl ;
			_sleep(3*1000);
			cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
			}
			if(a[1] == 4)
			{
			cout << "被除数是" << endl;
			cin >> c;
			cout << "除数是" << endl;
			for(int b = 1;b < 2;b++)
			{
				cin >> a[8];
				sum  = c / a[8];
			}
			cout << "答案是" << " "<< sum  << endl;
			_sleep(3*1000);
			cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
			}
			if(a[1] == 5)
			{
				continue;
			}
			}
			else
			{
				cout << "请输入1-5的数" << endl;
				continue;
			}
		}
		if(a[0] == 2)
		{
			cout << "要计时多少分钟？"<< endl;
			cin >> d;
			int min = 00,second = 00;
			for(int i = 1;i <= d;i++)
			{
				for(int o = 1;o <= 60;o++)
				{
					if(second == 60)
					{
						second = 0;
					}
					cout << min << ":" << second << endl;
					_sleep(1*1000);
					second++;
				}
				min++;
			}
			cout << "完成" << endl;
			cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
			cout << "继续?(是(1)/否(2))" << endl;
			cin >> a[9];
			if(a[9] == 1)
			{
				continue;
			}
			else
			{
				break;
			}
		}
		if(a[0] == 3)
		{ 
			cout << "告诉我计数初始数与结束数" << endl;
			cin >> h >> j;//h是初始，j是结束
			cout << "(1)所有数"  << endl << "(2)所有偶数" << endl << "(3)所有奇数" << endl;
			cin >> a[10];
			if((a[10] == 1)||(a[10] == 2)||(a[10] == 3))
			{
				if(a[10] == 1)
				{
				 	for(int bb = h;bb <= j;bb++)
		 			{
						cout << bb << " ";
					}
					cout << endl;
				}	
				if(a[10] == 2)
				{
					for(int cc = h;cc <= j;cc++)
					{
						if(cc % 2 == 0)
						{
							cout << cc << " ";
						}
					}
					cout << endl; 
				}
				if(a[10] == 3)
				{
					for(int ee = h;ee <= j;ee++)
					{
						if(ee % 2 == 1)
						{
							cout << ee << " ";
						}
					}
					cout << endl;
				}
				cout << "完成" << endl;
				cout << "继续?(是(1)/否(2))" << endl;
				cin >> a[11];
				if(a[11] == 1)
				{
					continue;
				}
				else
				{
					break;
				} 
			}
			else
			{
				cout << "请输入1-3的数" << endl;
				continue;
			}
		} 
				if(a[0] == 4)
				{
					break;
				}
	}
    }
    if(a[99] == 1)
    {
		for(int e = 1;e >= 1;e++)
		{
		cout << "(1)compute" << endl << "(2)counter" << endl << "(3)Calculator" << endl << "(4)go out" << endl;
		cin >> a[0];
		if(a[0] == 1)
		{
			cout << "(1)+" << endl << "(2)-" << endl << "(3)*" << endl << "(4)/" << endl << "(5)back" << endl;
			cin >> a[1];
			if((a[1] == 1)||(a[1] == 2)||(a[1] == 3)||(a[1] == 4)||(a[1] == 5))
			{
			if(a[1] == 1)
			{
			cout << "How many numbers are there to be calculated" << endl ;
			cin >> a[2];
			for(int b = 1;b <= a[2];b++)
			{
				cin >> a[3];
				num += a[3];
			}
			cout << "the answer is" << " "<< num  << endl;
			_sleep(3*1000);
			cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
			}
			if(a[1] == 2)
			{
			cout << "How many numbers are there to be calculated" << endl ;  
			cin >> a[4];
			for(int b = 1;b <= a[4];b++)
			{
				cin >> a[5];
				num -= a[5];
			}
			cout << "the answer is" << " "<< num  << endl;
			_sleep(3*1000);
			cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
			}
			int sum = 1;
			if(a[1] == 3)
			{
			cout << "How many numbers are there to be calculated" << endl ;
			cin >> a[6];
			for(int b = 1;b <= a[6];b++)
			{
				cin >> a[7];
				sum = sum * a[7];
			}
			cout << "the answer is" << " "<< sum << endl ;
			_sleep(3*1000);
			cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
			}
			if(a[1] == 4)
			{
			cout << "tell me dividend" << endl;
			cin >> c;
			cout << "tell me divisor" << endl;
			for(int b = 1;b < 2;b++)
			{
				cin >> a[8];
				sum  = c / a[8];
			}
			cout << "the answer is" << " "<< sum  << endl;
			_sleep(3*1000);
			cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
			}
			if(a[1] == 5)
			{
				continue;
			}
			}
			else
			{
				cout << "the number is wrong" << endl;
				continue;
			}
		}
		if(a[0] == 2)
		{
			cout << "How long should the timer be set for?(min)"<< endl;
			cin >> d;
			int min = 00,second = 00;
			for(int i = 1;i <= d;i++)
			{
				for(int o = 1;o <= 60;o++)
				{
					if(second == 60)
					{
						second = 0;
					}
					cout << min << ":" << second << endl;
					_sleep(1*1000);
					second++;
				}
				min++;
			}
			cout << "it's OK" << endl;
			cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
			cout << "continue?(yes(1)/no(2))" << endl;
			cin >> a[9];
			if(a[9] == 1)
			{
				continue;
			}
			else
			{
				break;
			}
		}
		if(a[0] == 3)
		{ 
			cout << "Tell me the starting number and ending number" << endl;
			cin >> h >> j;//h是初始，j是结束
			cout << "(1)All numbers"  << endl << "(2)All even numbers" << endl << "(3)All odd numbers" << endl;
			cin >> a[10];
			if((a[10] == 1)||(a[10] == 2)||(a[10] == 3))
			{
				if(a[10] == 1)
				{
				 	for(int bb = h;bb <= j;bb++)
		 			{
						cout << bb << " ";
					}
					cout << endl;
				}	
				if(a[10] == 2)
				{
					for(int cc = h;cc <= j;cc++)
					{
						if(cc % 2 == 0)
						{
							cout << cc << " ";
						}
					}
					cout << endl;
				}
				if(a[10] == 3)
				{
					for(int ee = h;ee <= j;ee++)
					{
						if(ee % 2 == 1)
						{
							cout << ee << " ";
						}
					}
					cout << endl;
				}
				cout << "it's OK" << endl;
				cout << "continue?(yes(1)/no(2))" << endl;
				cin >> a[11];
				if(a[11] == 1)
				{
					continue;
				}
				else
				{
					break;
				} 
			}
			else
			{
				cout << "the number is wrong" << endl;
				continue;
			}
		} 
		if(a[0] == 4)
		{
			break;
		}
		}
	}
    return 0;
}
