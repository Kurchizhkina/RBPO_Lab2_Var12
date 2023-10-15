module student_1bib21048.Lab2.Var12:F2;

namespace RBPO {
	namespace Lab2 {
		namespace Variant12 {
			namespace Task4 {
				double f2(double);
			};
		};
	};
};

double RBPO::Lab2::Variant12::Task4::f2(double x) {
	return x <= 0 ? abs(-pow(x, 2) + 3*x + 8) : sqrt(pow(x, 2) + (1/x));
};
