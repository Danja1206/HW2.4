#pragma once
#include <algorithm>
#define _USE_MATH_DEFINES
#include <math.h>
#include <numeric>
#include <vector>

using namespace std;

void generateAnalogSignal(vector<double>& signals)
{
	generate(signals.begin(), signals.end(), [n = 0]() mutable
	{
		return sin(n++ * (2 * M_PI / 100)) * 10;
	});
}

double checkSingnalConversionError(vector<double>& analogSignals, vector<int>& digitalSignals)
{
	return inner_product(analogSignals.begin(), analogSignals.end(), digitalSignals.begin(), 0.0,
		plus<double>{},
		[](double a, int b)
		{
			return pow(a - b, 2);
		});
}