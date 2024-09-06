int lengthOfLastWord(char* s) {
	int count = 0;
	  for (int i = strlen(s) - 2; i >= 0; i--) {
	  	if (s[i] == ' ' && isalpha(s[i+1])) {
			break;
		}
		else if (isalpha(s[i+1])) count++;
	  }
	  count++;
	return count;
}
