#include<iostream>
#include<string.h>
using namespace std;
#define s " "// gan hang so

int main()
{
	int i;
	char chuoi[100];
	cin >> chuoi;
	
	strlwr(chuoi); // tra ve chuoi chu thuong
	char *s1, s2[100];
	for (i = strlen(chuoi) - 1; i >= 0; i--)
	{
		if (chuoi == " ")
		{
			strcpy(s2, &chuoi[i + 1]); // ghep cac ki tu thanh 1 tu
			break;
		}
		s1 = strtok(chuoi, s);
		while (s1 != NULL)
		{
			if (strcmp(s1, s2))
			{
				cout << s1[0];
			}
			s1 = strtok(NULL, s); // dung xoa bo dau giong voi (s)
		}
		cout << s2;
		cout << "@ptit.edu.vn";
		return 0;
	}


}