void searchName(int numb, StudentList *tableT)
{
	int i;
	string Name;
	cout << "Enter the name of student that youre searching: ";
	cin >> Name;
	for (i = 0; i < numb; i++)
	{
		if (tableT->name == Name)
			searchtable = tableT;
	}

}
void searchSurname(int numb, StudentList *tableT)
{
	int i;
	string Surname;
	cout << "Enter the surname of student that youre searching: ";
	cin >> Surname;
	for (i = 0; i < numb; i++)
	{
		if (tableT->Surname == Surname)
			searchtable = tableT;
	}
}
void filters(int numb, StudentList *tableT)
{
	int method;
	while (true)
	{
		cout << "Searching by Name(1) or Surname(2) or Exit(3)??: ";
		cin >> k;
		while
			switch (method)
			{
			case 1: searchName(numb, tableT);
				cout << "Searching complete " << endl;
				output(numb, tableT);
				break;
			case 2: searchSurname(numb, tableT);
				cout << "Searching complete " << endl;
				output(numb, tableT);
				break;
			case 3: return 0;
			}
	}
}
