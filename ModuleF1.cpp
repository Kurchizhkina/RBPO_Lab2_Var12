module student_1bib21048.Lab2.Var12:F1;

namespace RBPO {
	namespace Lab2 {
		namespace Variant12 {
			namespace Task4 {
				double f1(double);
			};
		};
	};
};

double RBPO::Lab2::Variant12::Task4::f1(double x) {
	return (sin(4*x) * cos(2*x)) / ((1+cos(4*x)) * (1 + cos(2*x)));
};
