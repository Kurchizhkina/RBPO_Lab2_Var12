module;
#include <cmath>

module  student_1bib21048.Lab2.Var12;

namespace RBPO {
	namespace Lab2 {
		namespace Variant12 {
			namespace Task2 {
				double f1(double);
				double f2(double);
				double f3(unsigned long long);
				double f4(double);
				double a(long long);
			};
		};
	};
};

double RBPO::Lab2::Variant12::Task2::f1(double x) {
	return (sin(4*x) * cos(2*x)) / ((1+cos(4*x)) * (1 + cos(2*x)));
};

double RBPO::Lab2::Variant12::Task2::f2(double x) {
	if (x <= 0)
		return abs(-pow(x, 2) + 3*x + 8);
	return sqrt(pow(x, 2) + (1/x));
};

double RBPO::Lab2::Variant12::Task2::a(long long i) {
	return (i % 2 == 0 ? 1 : -1) * 1 / double(i * i + pow(2, i));
};

double RBPO::Lab2::Variant12::Task2::f3(unsigned long long n) {
	double sum = a(0); unsigned long long i = 0;
	while (i < n)
		sum += a(++i);
	return sum;
};

double RBPO::Lab2::Variant12::Task2::f4(double eps) {
	double sum = a(0), temp = a(1), temp1 = a(2); unsigned long long i = 2;
	while (eps < abs(temp - temp1))
		sum += temp, temp = temp1, temp1 = a(++i);
	return sum;
};

