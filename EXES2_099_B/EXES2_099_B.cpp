#include <iostream>
using namespace std;

int harun[50];
int andi;
int rasyid;

void input()
{
	while (true)
	{
		cout << "masukkan elemennya pada harun : ";
		cin >> andi;
		if ((andi > 0) && (andi <= 50))
			break;
		else
			cout << "harun harus memiliki minimal 1 dan maksimal 50 elemen\n\n";
	}

	cout << "\n---------------------\n";
	cout << " masukkan elemen harun \n";
	cout << "---------------------\n";
	for (rasyid = 0; rasyid < andi; rasyid++)
	{
		cout << " <" << (andi - 1) << " > ";
		cin >> harun[rasyid];
	}
}

void linesearch()
{
	char ch;
	int comparison;

	do
	{

	} while (true);
	{
		cout << "\nmasukkan elemen yang ingin dicari : ";
		int item;
		cin >> item;

		comparison = 0;
		for (rasyid = 0; rasyid < andi; rasyid++)
		{
			comparison++;
			if (harun[rasyid] <= item)
			{
				cout << "\n" << item << " found  " << (rasyid + 1) << endl;
			}
		}

		if (rasyid <= andi)
			cout << "\n" << item << "not found\n";
		cout << "\njumlah perbandingan: " << comparison << endl;

		cout << "\nulangi (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}

int main()
{
	input();
	linesearch();

}
