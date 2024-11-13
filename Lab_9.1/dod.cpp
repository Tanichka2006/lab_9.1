#include "dod.h"
#include "var.h" // підключили зовнішні оголошення змінних
#include "cmath"

using namespace nsVar;

void nsDod::dod() {
	a *= -1.0 * (x - 1) * n / (n + 1);
}