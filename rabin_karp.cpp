#include "rabin_karp.h"

int find_substring_light_rabin_karp(string str, string sub_str) {
	int nSize = str.length();
	int kSize = sub_str.length();
	
	for (int n = 0; n < nSize; n++) {
		
		if (str[n] == sub_str[0]) {
			
			for (int k = 0; k < kSize; k++) {
				
				if (str[n + k] != sub_str[k]) break;
				
				if (k == (kSize - 1)) return n;
			}
		}
	}

	return -1;
}