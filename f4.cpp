module;
#include <cmath>
module student_1bib21048.Lab2.Var12;

namespace RBPO {
	namespace Lab2 {
		namespace Variant12 {
			namespace Task3 {
				double f4(double);
				double a(long long);
			};
		};
	};
};

double RBPO::Lab2::Variant12::Task3::f4(double eps) {
	double sum = a(0), temp = a(1), temp1 = a(2); unsigned long long i = 2;
	do {
		sum += temp, temp = temp1, temp1 = a(++i);
	} while (eps < std::abs(temp - temp1));
	return sum;
};
