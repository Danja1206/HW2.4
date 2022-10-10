#pragma once
#include <algorithm>

using namespace std;

template <typename Array, typename Value>
void insert_sorted(Array& arr, const Value& val)
{
	auto it = upper_bound(arr.begin(), arr.end(), val);
	arr.insert(it, val);
}

template <typename Output>
void output(Output& output)
{
	for (int numbers : output)
		cout << numbers << " ";
	cout << endl;
}