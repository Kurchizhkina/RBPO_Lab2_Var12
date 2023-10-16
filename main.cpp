#include <iostream>

import student_1bib21048.Lab2.Var12;
enum Choice {
	Task1 = '1', Task2 = '2', Task3 = '3', Task4 = '4', Task5 = '5'
};

int main() {
	char q;
	setlocale(LC_ALL, "Russian");
	do
	{
		std::cout << "Выберите задание для запуска:\
					\nДля выполнения 1 задания, нажмите:\t\'1\'\
					\nДля выполнения 2 задания, нажмите:\t\'2\'\
					\nДля выполнения 3 задания, нажмите:\t\'3\'\
					\nДля выполнения 4 задания, нажмите:\t\'4\'\
					\nДля выполнения 5 задания, нажмите:\t\'5\'\
					\nДля выхода, нажмите:\t\'Q\'" << std::endl;
		std::cin >> q;
		switch ((Choice)q) {
			unsigned long long n; double x, eps;
		case Task1:
			std::cout << "Вы запустили выполнение 1 задания." << std::endl
				<< "Введите x, n и эпселент:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant12::Task1::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant12::Task1::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant12::Task1::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant12::Task1::f4(eps) << std::endl;
			break;
		case Task2:
			std::cout << "Вы запустили выполнение 2 задания." << std::endl
				<< "Введите x, n и эпселент:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant12::Task2::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant12::Task2::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant12::Task2::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant12::Task2::f4(eps) << std::endl;
			break;
		case Task3:
			std::cout << "Вы запустили выполнение 3 задания." << std::endl
				<< "Введите x, n и эпселент:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant12::Task3::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant12::Task3::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant12::Task3::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant12::Task3::f4(eps) << std::endl;
			break;
		case Task4:
			std::cout << "Вы запустили выполнение 4 задания." << std::endl
				<< "Введите x, n и эпселент:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant12::Task4::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant12::Task4::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant12::Task4::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant12::Task4::f4(eps) << std::endl;
			break;
		case Task5:
			std::cout << "Вы запустили выполнение 5 задания." << std::endl
				<< "Введите x, n и эпселент:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant12::Task5::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant12::Task5::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant12::Task5::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant12::Task5::f4(eps) << std::endl;
			break;
		case 'Q':
			break;
		default:
			std::cout << "Введенное значение непонятное!" << std::endl;
			break;
		}
	} while (q != 'Q');
	return 0;
};
