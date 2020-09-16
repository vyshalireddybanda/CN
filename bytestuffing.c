#include <stdio.h>
#include <string.h>

int main() {
	char h[10];
	char t[10];
	char s[100];
	char stuff[10];
	char s1[100];
	char esc[] = "esc";
	int k = 0;
	printf("Enter the characters :");
	scanf("%s", s);
	printf("Enter the starting delimiter:");
	scanf("%s", h);
	printf("Enter the  ending delimiter:");
	scanf("%s", t);
	printf("Enter a character that is to be stuffed:");
	scanf("%s", stuff);

	for (int i = 0; i <strlen(h); i++) {
		s1[k] = h[i];
		k++;
	}

	for (int i = 0; i < strlen(s); i++) {
		int count = 0;
		for (int j = i, l = 0; j < (i + strlen(h)); j++,l++) {
			if (s[j] == h[l]) {
				count++;
			} else {
				break;
			}
		}
		if (count == strlen(h)) {
			for (int m = 0; m < strlen(stuff); m++) {
				s1[k] = stuff[m];
				k++;
			}
		}
		count = 0;
		for (int j = i, l = 0; j < (i + strlen(t)); j++,l++) {
                        if (s[j] == t[l]) {
                                count++;
                        } else {
                                break;
                        }
                }
                if (count == strlen(t)) {
                        for (int m = 0; m < strlen(stuff); m++) {
                                s1[k] = stuff[m];
                                k++;
                        }
                }
		count = 0;
		for (int j = i, l = 0; j < (i + strlen(esc)); j++,l++) {
                        if (s[j] == esc[l]) {
                                count++;
                        } else {
                                break;
                        }
                }
                if (count == strlen(esc)) {
                        for (int m = 0; m < strlen(stuff); m++) {
                                s1[k] = stuff[m];
                                k++;
                        }
                }
		 
		s1[k] = s[i];
		k++;
	}

	for (int i = 0; i <strlen(t); i++) {
                s1[k] = t[i];
                k++;
        }
	
	s1[k] = '\0';

	printf("After Stuffing: %s\n", s1);
	return 0;
}

