/**
*_atoi - gets the number out
*@s: the string !
*Return: integer
*/
int _atoi(char *s)
{
	int i = 0, num = 0, neg = -1, lnum = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		neg *= -1;
		i++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
		num = (num * 10) - (s[i++] - '0');
	lnum = neg * num;
	return (lnum);
}
