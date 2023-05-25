#pragma once
int list_size(int N) {
	if (N % 2 == 0) {
		return N / 2 - 1;
	}
	else return N / 2;
}