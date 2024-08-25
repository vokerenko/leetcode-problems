int romanToInt(char* s) {
	int sum = 0;
	int i = 0;
	while (s[i] != '\0') {
		switch(s[i])
		{
			case 'M':
			{
				sum += 1000;
				break;
			}
			case 'D':
			{
				sum += 500;
				break;
			}
			case 'C':
			{
				if (i + 1 != '\0' && (s[i+1] == 'D' || s[i+1] == 'M')) {
					sum -= 100;
				}
				else {
					sum += 100;
				}
				break;
			}
			case 'L':
			{
				sum += 50;
				break;
			}
			case 'X':
			{	
				if (i + 1 != '\0' && (s[i+1] == 'L' || s[i+1] == 'C')) {
					sum -= 10;
				}
				else {
					sum += 10;
				}
				break;
			}
			case 'V':
			{
				sum += 5;
				break;
			}
			case 'I':
			{	
				if (i + 1 != '\0' && (s[i+1] == 'V' || s[i+1] == 'X')) {
					sum -= 1;
				}
				else {
					sum += 1;
				}
				break;
			}
		}
		i++;
	}
	return sum;	
}
