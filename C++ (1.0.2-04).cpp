#include <bits/stdc++.h>
#include <windows.h>
#include <stdio.h> 
using namespace std;
int main()
{
	double a[100],c,d,i = 1,h,j,jj = 1;
	string n;
	int num = 0;
	cout << "Welcome to use CAD system"<< endl <<"version 1.0.2-02" << endl ; 
	cout << "latest time = 2026/04/18" << endl;
	cout << "Orange(c)2026" << endl;
	Sleep(5*1000);// 
	cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
	cout << "please tell me your language" << endl ;
	cout << "(1)English" << endl << "(2)÷–Œƒ" << endl << "(3)Russian " << endl;
	cin >> a[99];
	if(a[99] == 2) 
	{
		while(jj == 1)
		{
		while(jj == 1)
		{
			cout << "A:/CAD/";
			jj++;
		}
		for(int e = 1;e >= 1;e++)
		{
		cin >> n;
		if(n  == "º∆À„")
		{
			cout << "(1)º”∑®" << endl << "(2)ºı∑®" << endl << "(3)≥À∑®" << endl << "(4)≥˝∑®" << endl << "(5)ÕÀªÿ" << endl; 
			cin >> a[1];
			if((a[1] == 1)||(a[1] == 2)||(a[1] == 3)||(a[1] == 4)||(a[1] == 5))
			{
			if(a[1] == 1)
			{
			cout << "“™º∆À„µƒ ˝ «" << endl ;
			cin >> a[2];
			for(int b = 1;b <= a[2];b++)
			{
				cin >> a[3];
				num += a[3];
			}
			cout << "¥∞∏ «" << " "<< num  << endl;
			Sleep(3*1000);
			cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
			}
			if(a[1] == 2)
			{
			cout << "“™º∆À„µƒ ˝ «" << endl ;  
			cin >> a[4];
			for(int b = 1;b <= a[4];b++)
			{
				cin >> a[5];
				num -= a[5];
			}
			cout << "¥∞∏ «" << " "<< num  << endl;
			Sleep(3*1000);
			cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
			}
			int sum = 1;
			if(a[1] == 3)
			{
			cout << "“™º∆À„µƒ ˝ «" << endl ;
			cin >> a[6];
			for(int b = 1;b <= a[6];b++)
			{
				cin >> a[7];
				sum = sum * a[7];
			}
			cout << "¥∞∏ «" << " "<< sum << endl ;
			Sleep(3*1000);
			cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
			}
			if(a[1] == 4)
			{
			cout << "±ª≥˝ ˝ «" << endl;
			cin >> c;
			cout << "≥˝ ˝ «" << endl;
			for(int b = 1;b < 2;b++)
			{
				cin >> a[8];
				sum  = c / a[8];
			}
			cout << "¥∞∏ «" << " "<< sum  << endl;
			Sleep(3*1000);
			cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
			}
			if(a[1] == 5)
			{
				continue;
			}
			}
			else
			{
				cout << "«Î ‰»Î1-5µƒ ˝" << endl;
				continue;
			}
		}
		if(n == "º∆ ±∆˜")
		{
			cout << "“™º∆ ±∂‡…Ÿ∑÷÷”£ø"<< endl;
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
					Sleep(1*1000);
					second++;
				}
				min++;
			}
			cout << "ÕÍ≥…" << endl;
			cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
			cout << "ºÃ–¯?( «(1)/∑Ò(2))" << endl;
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
		if(n == "º∆ ˝")
		{ 
			cout << "∏ÊÀﬂŒ“º∆ ˝≥ı º ˝”ÎΩ· ¯ ˝" << endl;
			cin >> h >> j;
			cout << "(1)À˘”– ˝"  << endl << "(2)À˘”–≈º ˝" << endl << "(3)À˘”–∆Ê ˝" << endl;
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
				cout << "ÕÍ≥…" << endl;
				cout << "ºÃ–¯?( «(1)/∑Ò(2))" << endl;
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
				cout << "«Î ‰»Î1-3µƒ ˝" << endl;
				continue;
			}
		} 
		if(n == "ÕÀ≥ˆ")
		{
			break;
		}
		else
		{
			cout <<"'"<< n << "'" << " " << "Œ¥∂®“Â" << endl << "«Î÷ÿ–¬ ‰»Î" << endl;
		}		
		}
		jj = 1;
    }
	}
    if(a[99] == 1)
    {
		for(int e = 1;e >= 1;e++)
		{
		while(jj == 1)
		{
		while(jj == 1)
		{
			cout << "A:/CAD/";
			jj++;
		}
		cin >> n;
		if(n == "compute")
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
			Sleep(3*1000);
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
			Sleep(3*1000);
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
			Sleep(3*1000);
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
			Sleep(3*1000);
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
		if(n == "counter")
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
					Sleep(1*1000);
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
		if(n == "Calculator")
		{ 
			cout << "Tell me the starting number and ending number" << endl;
			cin >> h >> j;//hÊòØÂàùÂßãÔºåjÊòØÁªìÊùü
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
		if(n == "go out")
		{
			break;
		}
		else
		{
			cout <<"'"<< n << "'" << " " << "undefined" << endl << "Please re-enter" << endl;
		}
		}
		jj = 1;
		}
	}
	if(a[99] == 3)
	{
		for(int e = 1;e >= 1;e++)
		{
		while(jj == 1)
		{
		while(jj == 1)
		{
			cout << "A:/CAD/";
			jj++;
		}
		cin >> n;
		if(n == "ß”ßÌßÈß⁄ß„ß›ß÷ßﬂß⁄e ")
		{
			cout << "(1)ß„ß›ß‡ßÿß÷ßﬂß⁄ß÷" << endl << "(2)ß”ßÌßÈß⁄ß‰ß—ßﬂß⁄ß÷" << endl << "(3)ßµßﬁßﬂß‡ßÿß÷ßﬂß⁄ß÷" << endl << "(4)ß’ß÷ß›ß÷ßﬂß⁄ß÷" << endl << "(5)ß”ß÷ß‚ßﬂßÂß‰ßÓ" << endl;
			cin >> a[1];
			if((a[1] == 1)||(a[1] == 2)||(a[1] == 3)||(a[1] == 4)||(a[1] == 5))
			{
			if(a[1] == 1)
			{
			cout << "ß¨ß‡ß›ß⁄ßÈß÷ß„ß‰ß”ß‡, ß‹ß‡ß‰ß‡ß‚ß‡ß÷ ßﬂßÂßÿßﬂß‡ ß‚ß—ß„ß„ßÈß⁄ß‰ß—ß‰ßÓ" << endl ;
			cin >> a[2];
			for(int b = 1;b <= a[2];b++)
			{
				cin >> a[3];
				num += a[3];
			}
			cout << "ß∞ß‰ß”ß÷ß‰:" << " "<< num  << endl;
			Sleep(3*1000);
			cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
			}
			if(a[1] == 2)
			{
			cout << "ß¨ß‡ß›ß⁄ßÈß÷ß„ß‰ß”ß‡, ß‹ß‡ß‰ß‡ß‚ß‡ß÷ ßﬂßÂßÿßﬂß‡ ß‚ß—ß„ß„ßÈß⁄ß‰ß—ß‰ßÓ" << endl ;  
			cin >> a[4];
			for(int b = 1;b <= a[4];b++)
			{
				cin >> a[5];
				num -= a[5];
			}
			cout << "ß∞ß‰ß”ß÷ß‰:" << " "<< num  << endl;
			Sleep(3*1000);
			cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
			}
			int sum = 1;
			if(a[1] == 3)
			{
			cout << "ß¨ß‡ß›ß⁄ßÈß÷ß„ß‰ß”ß‡, ß‹ß‡ß‰ß‡ß‚ß‡ß÷ ßﬂßÂßÿßﬂß‡ ß‚ß—ß„ß„ßÈß⁄ß‰ß—ß‰ßÓ" << endl ;
			cin >> a[6];
			for(int b = 1;b <= a[6];b++)
			{
				cin >> a[7];
				sum = sum * a[7];
			}
			cout << "ß∞ß‰ß”ß÷ß‰:" << " "<< sum << endl ;
			Sleep(3*1000);
			cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
			}
			if(a[1] == 4)
			{
			cout << "ß•ß÷ß›ß⁄ßﬁß‡ß÷ ßÈß⁄ß„ß›ß‡" << endl;
			cin >> c;
			cout << "ß•ß÷ß›ß⁄ßﬁß‡ß„ß‰ßÓ" << endl;
			for(int b = 1;b < 2;b++)
			{
				cin >> a[8];
				sum  = c / a[8];
			}
			cout << "ß∞ß‰ß”ß÷ß‰:" << " "<< sum  << endl;
			Sleep(3*1000);
			cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
			}
			if(a[1] == 5)
			{
				continue;
			}
			}
			else
			{
				cout << "ß±ß‡ßÿß—ß›ßÂß€ß„ß‰ß—, ß”ß”ß÷ß’ß⁄ß‰ß÷ ßÈß⁄ß„ß›ß‡ 1 - 5." << endl;
				continue;
			}
		}
		if(n == "ß‰ß—ß€ßﬁß÷ß‚")
		{
			cout << "ß≥ß‹ß‡ß›ßÓß‹ß‡ ßﬁß⁄ßﬂßÂß‰ ßÔß‰ß‡ ßŸß—ß€ßﬁß÷ß‰?"<< endl;
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
					Sleep(1*1000);
					second++;
				}
				min++;
			}
			cout << "ßŸß—ß”ß÷ß‚ßÍß⁄ß‰ßÓ" << endl;
			cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
			cout << "ß±ß‚ß‡ß’ß‡ß›ßÿß⁄ß‰ßÓ? (ß•ß— (1) / ßØß÷ß‰ (2))" << endl;
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
		if(n == "ß·ß‡ß’ß„ßÈß◊ß‰")
		{ 
			cout << "ßØß—ßŸß‡ß”ß⁄ß‰ß÷ ßﬂß—ßÈß—ß›ßÓßﬂßÌß÷ ß⁄ ß‹ß‡ßﬂß÷ßÈßﬂßÌß÷ ßÈß⁄ß„ß›ß—." << endl;
			cin >> h >> j;//h «≥ı º£¨j «Ω· ¯
			cout << "(1)ß£ß„ß÷ ßÈß⁄ß„ß›ß—"  << endl << "(2)ß£ß„ß÷ ßÈß÷ß‰ßﬂßÌß÷ ßÈß⁄ß„ß›ß—" << endl << "(3)ß£ß„ß÷ ßﬂß÷ßÈß÷ß‰ßﬂßÌß÷ ßÈß⁄ß„ß›ß—" << endl;
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
				cout << "ßŸß—ß”ß÷ß‚ßÍß⁄ß‰ßÓ" << endl;
				cout << "ß±ß‚ß‡ß’ß‡ß›ßÿß⁄ß‰ßÓ? (ß•ß— (1) / ßØß÷ß‰ (2))" << endl;
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
				cout << "ß£ß”ß÷ß’ß⁄ß‰ß÷ ßÈß⁄ß„ß›ß‡ 1 - 3." << endl;
				continue;
			}
		} 
		if(n == "ß”ßÌßÁß‡ß’")
		{
			break;
		}
		else
		{
			cout <<"'"<< n << "'"<< " " << "ßﬂß÷ß‡ß·ß‚ß÷ß’ß÷ß›ß÷ßﬂßﬂßÌß€" << endl << "ß±ß‡ßÿß—ß›ßÂß€ß„ß‰ß—, ß”ß÷ß‚ßﬂß⁄ß‰ß÷ß„ßÓ" << endl;
		}
		jj = 1;
		}
		}
    }
	
    return 0;
}	
