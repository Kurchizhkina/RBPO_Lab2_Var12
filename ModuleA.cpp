module student_1bib21048.Lab2.Var12:A;

namespace RBPO {
	namespace Lab2 {
		namespace Variant12 {
			namespace Task4 {
				double a(long long);
			};
		};
	};
};

double RBPO::Lab2::Variant12::Task4::a(long long i) {
	return (i % 2 == 0 ? 1 : -1) * 1 / double(i * i + pow(2, i));
};