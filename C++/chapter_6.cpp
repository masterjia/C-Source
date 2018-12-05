//#include <iostream>
//#include <cctype>
//#include <array>
//using namespace std;
////int main()
////{
////	char ch;
////	cout << "Please enter a character(type @ to stop): ";
////	cin >> ch;
////	while (ch != '@')
////	{
////		if (islower(ch))
////			cout << char(ch - 32) ;
////		else if (isupper(ch))
////		{
////			cout << char(ch + 32) ;
////		}
////		cin >> ch;
////		
////	}
////}
////int main()
////{
////	const int Arsize = 10;
////	int i ,mcout,sum;
////	i=sum= mcout = 0;
////	int average;
////	array<double, Arsize> donation;
////	while (cin >> donation[i])
////	{
////		sum += donation[i];
////		i++;
////		if (Arsize-1 == i)
////		{
////			break;
////		}
////	}
////	average = sum / i;
////	for (int j = 0; j < i; j++)
////	{
////		if (donation[j] > average)
////		{
////			mcout++;
////		}
////	}
////	cout << "Average=" << average << endl;
////	cout << "There are " << mcout << " bigger than average.\n";
////	
////}
////int main()
////{
////	char ch;
////	int mcount = 0;
////	cin.get(ch);
////	while (cin.fail() == false)
////	{
////		cout << ch;
////		mcount++;
////		cin.get(ch);
////	}
////	cout << endl << mcount << "characters read"<<endl;
////	return 0;
////}
////int main()
////{
////	int flag = 0;
////	cout << "Please enter one of the following choices:\n"
////		<< "c) carnivore     p)pianist\n"
////		<< "t) tree          g)game\n";
////	char ch;
////	while (cin >> ch)
////	{
////		switch (ch)
////		{
////		case 'c':
////		case 'C':
////			cout << "This is a carnivore.\n";
////			flag = 1;
////			break;
////		case 'p':
////		case 'P':
////			cout << "This is a pianist.\n";
////			break;
////		case 't':
////		case 'T':
////			cout << "This is a tree.\n";
////			break;
////		case 'g':
////		case 'G':
////			cout << "This is a game.\n";
////			break;
////		default:
////			cout << "Please enter a c,p,t, or g: ";
////		}
////		if (1==flag)
////		{
////			break;
////		}
////	}
////	return 0;
////}
////const int strsize = 20;
////struct Bop
////{
////	char fullname[strsize];
////	char title[strsize];
////	char bopname[strsize];
////	int preference;
////};
////int main()
////{
////	Bop bop[5] = { {"Wimp Macho","Wimp","Macho",0}, 
////				   {"Raki Rhodes","Raki","Rhodes",1 }, 
////				   {"Celia	Laiter","Celia","Laiter",2 }, 
////				   {"Hoppy Hipman","Hoppy","Hipman",0 }, 
////	               { "Pat Hand","Pat","Hand",1}
////	};
////	cout << "Benevolent Order of Programmers Report\n"
////		<< "a.display by name        b.display by title\n"
////		<< "c.display by bopname     d.display by preference\n"
////		<< "q.quit\n";
////	char ch;
////	cout << "Enter your choice:";
////	cin >> ch;
////	while (ch !='q')
////	{
////		switch (ch)
////		{
////		case 'A':
////		case 'a':
////			for (int i = 0; i < 5; i++)
////			{
////				cout << bop[i].fullname << endl;
////			}
////			break;
////		case 'B':
////		case 'b':
////			for (int i = 0; i < 5; i++)
////			{
////				cout << bop[i].title << endl;
////			}
////			break;
////		case 'C':
////		case 'c':
////			for (int i = 0; i < 5; i++)
////			{
////				cout << bop[i].bopname << endl;
////			}
////			break;
////		case 'D':
////		case 'd':
////			for (int i = 0; i < 5; i++)
////			{
////				if (0==bop[i].preference)
////				{
////					cout << bop[i].fullname << endl;
////				}
////				else if (1==bop[i].preference)
////				{
////					cout << bop[i].title << endl;
////				}
////				else
////				{
////					cout << bop[i].bopname<< endl;
////				}
////				
////			}
////			break;
////		}
////		cout << "Next choice:";
////			cin >> ch;
////	}
////	return 0;
////}
////#include <iostream>
////using namespace std;
////int main()
////{
////	float income, incometax = 0;
////	cout << "Enter your income: ";
////	while (cin >> income && income >= 0)
////	{
////		if (income > 35000)
////		{
////			incometax += (income - 35000)*0.2;
////			income = 35000;
////		}
////		if (income >15000 && income <= 35000)
////		{
////			incometax += (income - 15000)*0.15;
////			income = 15000;
////		}
////		if (income > 5000 && income <= 15000)
////		{
////			incometax += (income - 5000)*0.1;
////		}
////		cout << "The incometax you shoule pay is: " << incometax << endl;
////		cout << "Enter your income: ";
////	}
////
////}
////#include <iostream>
////#include <string>
////using namespace std;
////int main()
////{
////	string s;
////	int mcount = 0;
////	int mcount1 = 0;
////	int mcount2 = 0;
////	cout << "Enter words (q to quit):\n";
////	cin >> s;
////	while (s != "q")
////	{
////		if (isalpha(s[0]))
////		{
////			if (s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u')
////					mcount++;
////			else
////			{
////				mcount1++;
////			}
////		}
////		else
////		{
////			mcount2++;
////		}
////		
////		cin >> s;
////	}
////	cout << mcount << " words beginning with vowels.\n";
////	cout << mcount1 << " words beginning with consonants.\n";
////	cout << mcount2 << " others";
////
////}
///*使用文件输出的主要步骤如下：
//** 1.包含头文件fstream
//** 2.创建一个ofstream对象
//** 3.将该ofstream对象同一个文件关联起来
//** 4. 就像使用out对象那样使用ofstream对象
//*/
////#include <iostream>
////#include <fstream>
////#include <string>
////using namespace std;
////int main()
////{
////	string automobile;
////	int year;
////	double a_price;
////	double b_price;
////
////	ofstream outFile;
////	outFile.open("carinfo.txt");
////	cout << "Enter the make and mode of automobile: ";
////	getline(cin, automobile);
////	cout << "Enter the nodle year: ";
////	cin >> year;
////	cout << "Enter the original asking price: ";
////	cin >> a_price;
////	b_price = a_price * 0.9;
////	//屏幕输出
////	cout << fixed;
////	cout.precision(2);
////	cout.setf(ios_base::showpoint);
////	cout << "Make and model: " << automobile << endl;
////	cout << "Year: " << year << endl;
////	cout << "Was asking $" << a_price << endl;
////	cout << "Now asking $" << b_price << endl;
////	//输出到文本文件
////	outFile << fixed;
////	outFile.precision(2);
////	outFile.setf(ios_base::showpoint);
////	outFile << "Make and model: " << automobile << endl;
////	outFile << "Year: " << year << endl;
////	outFile << "Was asking $" << a_price << endl;
////	outFile << "Now asking $" << b_price << endl;
////	outFile.close();
////	return 0;
////}
////#include<iostream>
////#include<fstream>
////#include<cstdlib>
////#include<string>
////using namespace std;
////int main()
////{
////	string filename;
////	ifstream inFile;
////	cout << "Enter name of the data file: ";
////	getline(cin, filename);
////	inFile.open(filename);
////	if (!inFile.is_open())
////	{
////		cout << "Could not open the file " << filename << endl;
////		cout << "Program terminating.\n";
////		exit(EXIT_FAILURE);
////	}
////	double value;
////	double sum = 0.0;
////	int count = 0;
////	inFile >> value;
////	while (inFile.good())
////	{
////		cout << "value= " << value << endl;
////		++count;
////		sum += value;
////		inFile >> value;
////	}
////	if (inFile.eof())
////	{
////		cout << "End of file reached.\n";
////	}
////	else if (inFile.fail())
////	{
////		cout << "Input terminated by data mismatch.\n";
////	}
////	else
////	{
////		cout << "Input terminated for unkoown reason";
////	}
////	if (0 == count)
////		cout << "No data processed.\n";
////	else
////	{
////		cout << "Items read: " << count << endl;
////		cout << "Sum: " << sum << endl;
////		cout << "Average: " << sum / count << endl;
////
////	}
////	inFile.close();
////	return 0;
////}
////#include<iostream>
////#include<fstream>
////#include<string>
////#include<cstdlib>
////using namespace std;
////int main()
////{
////	string filename;
////	cout << "Please enter the name of the character file: ";
////	getline(cin, filename);
////	ifstream inFile;
////	inFile.open(filename);
////	if (!inFile.is_open())
////	{
////		cout << "Could not open the file " << filename << endl;
////		cout << "Program terminating.\n";
////		exit(EXIT_FAILURE);
////	}
////	char ch;
////	int count = 0;
////	while (inFile.get(ch))
////	{
////		count++;
////	}
////	if (inFile.eof())
////	{
////		cout << "End of file reached.\n";
////	}
////	else if (inFile.fail())
////	{
////		cout << "Input terminated by data mismatch.\n";
////	}
////	else
////	{
////		cout << "Input terminated for unkoown reason";
////	}
////	if (0 == count)
////		cout << "No characters processed.\n";
////	else
////	{
////		cout << count << " characters are contained.\n";
////		
////	}
////	inFile.close();
////	return 0;
////}
////#include<iostream>
////#include<fstream>
////#include<string>
////using namespace std;
////struct Donation
////{
////	string name;
////	double money;
////};
////int main()
////{
////	string filename;
////	cout << "Enter the name of the donation file: ";
////	getline(cin, filename);
////	ifstream inFile;
////	inFile.open(filename);
////	if (!inFile.is_open())
////	{
////		cout << "Could not open the file " << filename << endl;
////		cout << "Program terminating.\n";
////		exit(EXIT_FAILURE);
////	}
////	int number;
////	inFile >> number;
////	inFile.get();
////	Donation* D = new Donation[number];
////	while (inFile.good())
////	{
////		for (int i = 0; i < number; i++)
////		{
////			getline(inFile, D[i].name);
////			inFile >> D[i].money;
////			inFile.get();
////		}
////	}
////	for (int i = 0; i < number; i++)
////	{
////		cout << D[i].name << ": " << D[i].money << endl;
////	}
////	
////	if (inFile.eof())
////	{
////		cout << "End of file reached.\n";
////	}
////	else if (inFile.fail())
////	{
////		cout << "Input terminated by data mismatch.\n";
////	}
////	else
////	{
////		cout << "Input terminated for unkoown reason";
////	}
////	cout << "Grand Patrons:\n";
////	for (int i = 0; i < number; i++)
////	{
////		if (D[i].money > 10000)
////		{
////			
////			cout << D[i].name << ": " << D[i].money << endl;
////		}
////	}
////	cout << "Patrons:\n";
////	for (int i = 0; i < number; i++)
////	{
////		if (D[i].money < 10000)
////		{
////			cout << D[i].name << ": " << D[i].money << endl;
////		}
////	}
////	delete[] D;
////	inFile.close();
////	return 0;
////}
//#include<iostream>
//using namespace std;
//int main()
//{
//	char ch;
//	int ct1, ct2; 
//	ct1 = ct2 = 0;
//	while ((ch=cin.get())!='$')
//	{
//		cout << ch;
//		ct1++;
//		if (ch='$')
//		{
//			ct2++;
//		}
//		cout << ch;
//	}
//	cout << "ct1=" << ct1 << "ct2" << ct2 << endl;
//	return 0;
//}