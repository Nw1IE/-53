#include<iostream>

int main()
{

	int LitreChouse, juiceppO, vvod, choice, fruit, quantity, totalCost;
	int apple = 150, orange = 100, apricot = 250, pear = 125;
	int Tomato = 140, Onion = 230, Cucumber = 124;
	int garlicky = 250, parsley = 140;
	int result{};
	int sum{};
	float discount, discoint2;
	char retown = true;
	char oplata = true;

	setlocale(LC_ALL, "ru");

	std::cout << "\tДобро пожаловать в магазин 'Соки Никиты'! \n\n\n\n";
	std::cout << "|На выбор имеются различные напитки| \n";
	do {
		std::cout << "|-------------------------------------|\n";
		std::cout << "\t|Фркутовые соки :|\n|1.яблочный - 2л 150р|\n|2.апельсиновый - 2л 100р|\n|3.абрикосовый - 2л 250р|\n|4.грушевый - 2л 125р|\n|";
		std::cout << "-------------------------------------\n";
		std::cout << "\t|Овощные соки : |\n|5.Томатный - 2л 140р|\n|6.Луковый - 2л 230р|\n|7.Огуречный - 124р|\n";
		std::cout << "|-------------------------------------|\n";
		std::cout << "\t|Чаи :|\n";
		std::cout << "|8.чесночный - 250р|\n|9.петрушевый 140р|\n";
		std::cout << "|-------------------------------------|\n";
		std::cin >> juiceppO;

		if (juiceppO < 1 || juiceppO > 9)
		{
			do
			{
				std::cout << "Введите номер товара еще раз: ";
				std::cin >> juiceppO;
			} while (juiceppO < 1 || juiceppO > 9);
		}

		std::cout << "Введите кол-во литров :";
		std::cin >> LitreChouse;
		if (LitreChouse < 0)
		{
			do
			{
				std::cout << "Введите кол-во литров еще раз: ";
				std::cin >> LitreChouse;

			} while (LitreChouse < 0);
		}

		if (juiceppO == 1)
		{
			result = apple * LitreChouse;
		}
		else if (juiceppO == 2)
		{
			result = orange * LitreChouse;
		}
		else if (juiceppO == 3)
		{
			result = apricot * LitreChouse;
		}
		else if (juiceppO == 4)
		{
			result = pear * LitreChouse;
		}
		else if (juiceppO == 5)
		{
			result = Tomato * LitreChouse;
		}
		else if (juiceppO == 6)
		{
			result = Onion * LitreChouse;
		}
		else if (juiceppO == 7)
		{
			result = Cucumber * LitreChouse;
		}
		else if (juiceppO == 8)
		{
			result = garlicky * LitreChouse;
		}
		else if (juiceppO == 9)
		{
			result = parsley * LitreChouse;
		}



		if (result > 500)
		{
			float discount = (result * 13) / 100;
			result -= discount;
			std::cout << "Общая сумма = " << result << " Рублей с учетом скидки в " << discount << " Рублей";

		}



		std::cout << "\nВыберите напиток еще раз[y/n]";
		std::cin >> retown;
	} while (retown == 'y');

	std::cout << "Вы будете оплачивать ?";
	std::cin >> oplata;
	if (oplata == 'y')
	{
		std::cout << "Оплата прошла, спасибо за покупку";
	}
	else
	{
		std::cout << "Оплата не прошла, вы не смогли оплатить";
	}


	if (juiceppO == 9 && LitreChouse >= 3 && result > 500);
	{
		float discount = (result * 18) / 100;
		result -= discount;
		std::cout << "Общая сумма = " << result << " Рублей с учетом скидки в " << discount << " Рублей";

	}



}


